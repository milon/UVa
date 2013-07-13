//UVa Problem-10026(Shoemaker's Problem)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<algorithm>
using namespace std;

class state{
    public:
        int num,fine,day;
        bool operator <(const state &a)const{
            if(fine*a.day!=day*a.fine)
                return fine*a.day>day*a.fine;
            return num<a.num;
            }
    };

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        state suru[n];
        for(int i=0;i<n;i++){
            cin>>suru[i].day>>suru[i].fine;
            suru[i].num=i+1;
            }
        sort(suru,suru+n);
        for(int i=0;i<n;i++){
            if(i)
                cout<<" ";
            cout<<suru[i].num;
            }
        cout<<endl;
        if(test)
            cout<<endl;
        }
    return 0;
    }
