//UVa Problem-11111(Generalized Matrioshkas)
//Accepted
//Running time: 0.460 sec

#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

const int maxn=1000000+10;

typedef struct queue{
    int e,d;
    };

queue st[maxn]={0};
int cnt;
int arr[maxn],n=0;

int solved(int n){
    cnt=0;
    memset(st,0,sizeof(st));
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            st[cnt].d-=arr[i];
            st[++cnt].e=arr[i];
            }
        else{
            if(st[cnt].e!=-arr[i])
                return 0;
            if(st[cnt].d>=arr[i])
                return 0;
            st[cnt--].d=0;
            }
        }
    return 1;
    }

int main(){
    char ch;
    while(scanf("%d%c",&arr[n++],&ch)==2){
        if(ch=='\n'){
            if(n%2==1){
                n=0;
                cout<<":-( Try again."<<endl;
                continue;
                }
            if(solved(n))
                cout<<":-) Matrioshka!"<<endl;
            else
                cout<<":-( Try again."<<endl;
            n=0;
            }
        }
    return 0;
    }
