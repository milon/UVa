//UVa Problem-10404(Bachet's Game)
//Accepted
//Running time: 0.380 sec

#include<iostream>
using namespace std;

#define MAX 1000001
#define WIN true
#define LOSE false

bool suru[MAX];

bool solve(int n,int m,int *method){
    for(int i=0;i<=n;i++)
        suru[i]=LOSE;
    for(int i=0;i<m;i++)
        suru[method[i]]=WIN;
    for(int i=0;i<=n;i++){
        if(suru[i]==WIN)
            continue;
        for(int j=0;j<m;j++){
            if(i-method[j]>=0 && suru[i-method[j]]==LOSE){
                suru[i]=WIN;
                break;
                }
            }
        }
    return suru[n];
    }

int main(){
    int n,m,method[10];
    while(cin>>n>>m){
        for(int i=0;i<m;i++)
            cin>>method[i];
        if(solve(n,m,method))
            cout<<"Stan wins"<<endl;
        else
            cout<<"Ollie wins"<<endl;
        }
    return 0;
    }
