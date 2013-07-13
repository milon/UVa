//UVa Problem-11703(sqrt log sin)
//Accepted
//Running time: 0.256 sec

#include<iostream>
#include<cmath>
using namespace std;

#define N 1000001
int suru[N];

void calc(){
    suru[0]=1;
    for(int i=1;i<N;i++){
        suru[i]=suru[(int)(floor(i-sqrt(i)))]+suru[(int)floor(log(i))]+suru[(int)(floor(i*sin(i)*sin(i)))];
        suru[i]%=1000000;
        }
    }

int main(){
    int n;
    calc();
    while(cin>>n && n>-1){
        cout<<suru[n]<<endl;
        }
    return 0;
    }
