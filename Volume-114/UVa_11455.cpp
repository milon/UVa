//UVa Problem-11455(Behold my quadrangle)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int suru[4];
        for(int i=0;i<4;i++)
            cin>>suru[i];
        if(suru[0]==suru[1] && suru[1]==suru[2] && suru[2]==suru[3]){
            cout<<"square"<<endl;
            continue;
            }
        for(int i=0;i<4;i++){
            for(int j=1;j<4;j++){
                if(suru[j]<suru[j-1])
                    swap(suru[j],suru[j-1]);
                }
            }
        if(suru[0]==suru[1] && suru[2]==suru[3])
            cout<<"rectangle"<<endl;
        else if(suru[0]+suru[1]+suru[2]>=suru[3])
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
        }
    return 0;
    }
