//UVa Problem-558(Wormholes)
//Accepted
//Running time: 0.052 sec
//Author: Milon

#include<iostream>
#include<climits>
using namespace std;

struct edges{
    int u,v,w;
    }e[2000+10];

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
            cin>>e[i].u>>e[i].v>>e[i].w;
        int suru[1000+10];
        for(int i=0;i<=n;i++)
            suru[i]=INT_MAX;
        suru[0]=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                if(suru[e[j].u]+e[j].w<suru[e[j].v])
                    suru[e[j].v]=suru[e[j].u]+e[j].w;
                }
            }
        bool have_negative_cycle=false;
        for(int j=0;j<m;j++){
            if(suru[e[j].u]+e[j].w<suru[e[j].v])
                have_negative_cycle=true;
            }
        if(have_negative_cycle)
            cout<<"possible"<<endl;
        else
            cout<<"not possible"<<endl;
        }
	return 0;
    }
