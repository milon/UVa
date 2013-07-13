//UVa Problem-11088(End up with More Teams)
//Accepted
//Running time: 0.228 sec

#include<iostream>
#include<algorithm>
using namespace std;

int table[(1<<15)];

int solve(int n,int now,int *score){
    if(table[now]!=-1)
        return table[now];
    if(now==(1<<n))
        return 0;
    int ret=0;
    for(int i=0;i<n;i++){
        if((now&(1<<i))!=0)
            continue;
        for(int j=i+1;j<n;j++){
            if((now&(1<<j))!=0)
                continue;
            for(int k=j+1;k<n;k++){
                if((now&(1<<k))!=0)
                    continue;
                ret=max(ret,solve(n,(((now|(1<<i))|(1<<j))|(1<<k)),score)+(score[i]+score[j]+score[k]>=20?1:0));
                }
            }
        }
    return table[now]=ret;
    }

int main(){
    int test=1;
    int n;
    while(cin>>n && n){
        int score[n];
        for(int i=0;i<n;i++)
            cin>>score[i];
        for(int i=0;i<(1<<n);i++)
            table[i]=-1;
        int ans=solve(n,0,score);
        cout<<"Case "<<test++<<": "<<ans<<endl;
        }
    return 0;
    }
