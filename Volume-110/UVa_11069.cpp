//UVa Problem-11069(A Graph Problem)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<string>
using namespace std;

long n,d[87];

long dp(long now){
    if(d[now]!= -1)
        return d[now];
    d[now]=0;
    if(now==n || now+1==n)
        d[now]=1;
    else
        d[now]=dp(now+2)+dp(now+3);
    return d[now];
    }

int main(){
    while(cin>>n){
        memset(d,-1,sizeof(d));
        cout<<((n>=2)?(dp(1)+dp(2)):dp(1))<<endl;
        }
    return 0;
    }
