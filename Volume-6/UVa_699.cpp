//UVa Problem-699(The Falling Leaves)
//Accepted
//Running time: 0.108 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int lm,rm;
int pos[200];

void solve(int now){
    lm=min(now,lm);
    rm=max(now,rm);
    int a;
    cin>>a;
    if(a!=-1){
        pos[now-1]+=a;
        solve(now-1);
        }
    cin>>a;
    if(a!=-1){
        pos[now+1]+=a;
        solve(now+1);
        }
    }

int main(){
    int n,test=1;
    while(cin>>n && n!=-1){
        for(int i=0;i<200;i++)
            pos[i]=0;
        rm=lm=100;
        pos[100]=n;
        solve(100);
        int cnt=0;
        cout<<"Case "<<test++<<":"<<endl;
        for(int i=lm;i<rm+1;i++){
            if(cnt)
                putchar(' ');
            cout<<pos[i];
            cnt++;
            }
        puts("");
        puts("");
        }
    return 0;
    }
