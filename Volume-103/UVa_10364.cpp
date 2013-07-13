//UVa Problem-10364(Square)
//Accepted
//Running time: 0.336 sec

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int n,total,target,suru;
int num[100],used[100];
char *token,buffer[10000];

void back(int sum,int now,int start){
    if(suru)
        return;
    if(now==3){
        suru=1;
        return;
        }
    if(sum>target)
        return;
    if(sum==target)
        back(0,now+1,0);
    for(int i=start;i<n;++i){
        if(!used[i]){
            used[i]=1;
            back(sum+num[i],now,i);
            used[i]=0;
            }
        }
    }

int main(){
    int test;
    cin>>test;
    getchar();
    while(test--){
        cin>>n;
        total=0;
        for(int i=0;i<n;++i){
            cin>>num[i];
            total+=num[i];
            }
        if(total%4){
            puts("no");
            continue;
            }
        target=total/4;
        memset(used,0,sizeof(int)*n);
        suru=0;
        back(0,0,0);
        if(!suru)
            puts("no");
        else
            puts("yes");
        }
    return 0;
    }
