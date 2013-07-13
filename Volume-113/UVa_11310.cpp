//UVa Problem-11310(Delivery Debacle)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

long long suru[41]={0};

void milon(){
    suru[1]=1;
    suru[2]=5;
    suru[3]=11;
    for(int i=4;i<41;i++)
        suru[i]=suru[i-1]+suru[i-2]*4+suru[i-3]*2;
    }

int main(){
    milon();
    int test,n;
    cin>>test;
    while(test--){
        cin>>n;
        cout<<suru[n]<<endl;
        }
    return 0;
    }
