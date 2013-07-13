//UVa Problem-10879(Code Refactoring)
//Accepted
//Running time: 0.092 sec

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    int kase=0;
    while(test--){
        int k;
        cin>>k;
        int output[4];
        int index=0;
        for(int i=2;i*i<=k;i++){
            if(k%i==0){
                output[index++]=i;
                output[index++]=k/i;
                if(index==4)
                    break;
                }
            }
        cout<<"Case #"<<++kase<<": "<<k<<" = "<<output[0]<<" * "<<output[1]<<" = "<<output[2]<<" * "<<output[3]<<endl;
        }
    return 0;
    }
