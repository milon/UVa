//UVa Problem-524(Prime Ring Problem)
//Accepted
//Running time: 0.248 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define N 100
int a[N];
int table[16];

void generate(){
    for(int i=4;i<N;i+=2)
        a[i]=0;
    for(int j=3;j<N;j+=2)
        a[j]=1;
    a[2]=1;
    for(int i=3;i*i<=N;i+=2)
        if(a[i]==1)
            for(int j=2*i;j<N;j+=i)
                a[j]=0;
    }

void print(int n){
    for(int i=0;i<n;i++){
        if(i)
            putchar(' ');
        printf("%d",table[i]);
        }
    putchar('\n');
    }

void bt(int n,int now,bool *used,int prev){
    if(n==now){
        if(a[1+prev]==1)
            print(n);
        return;
        }
    for(int i=now%2==0?3:2;i<=n;i+=2){
        if(used[i]==1 || a[i+prev]==0)
            continue;
        used[i]=true;
        table[now]=i;
        bt(n,now+1,used,i);
        used[i]=false;
        }
    }

int main(){
    generate();
    int n,tc=1;
    while(scanf("%d",&n) != -1){
        if(tc>1)
            putchar('\n');
        printf("Case %d:\n",tc++);
        table[0]=1;
        bool used[n+1];
        fill(used,used+n+1,false);
        used[1]=true;
        bt(n,1,used,1);
        }
    return 0;
    }
