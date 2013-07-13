//UVa Problem-10325(The Lottery)
//Accepted
//Running time: 0.120 sec

#include<iostream>
#include<algorithm>
using namespace std;

int ans;

long long  lcm(long long a,long long b){
    return (long long)a/__gcd(a,b)*b;
    }

void suru(int n,int now,int m,int last,int *num,int sign,long long val){
    if(val>n)
        return;
    if(now==0){
        ans+=sign*(n/val);
        return;
        }
    for(int i=last+1;i<m;i++){
        suru(n,now-1,m,i,num,sign,lcm(val,num[i]));
        }
    }

int main(){
    int n,m;
    int num[15];
    while(cin>>n>>m){
        for(int i=0;i<m;i++)
            cin>>num[i];
        ans=0;
        for(int i=1;i<=m;i++){
            suru(n,i,m,-1,num,i%2?1:-1,1LL);
            }
        cout<<n-ans<<endl;
        }
    return 0;
    }
