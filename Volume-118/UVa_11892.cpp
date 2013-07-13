//UVa Problem-11892(ENimEN)
//Accepted
//Running time: 0.156 sec

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int input;
        int count_one=0;
        int count_other=0;
        for(int i=0;i<n;i++){
            cin>>input;
            if(input==1)
                count_one++;
            else
                count_other++;
            }
        if(count_one%2)
            cout<<"poopi"<<endl;
        else{
            if(count_other>0)
                cout<<"poopi"<<endl;
            else
                cout<<"piloop"<<endl;
            }
        }
    return 0;
    }
