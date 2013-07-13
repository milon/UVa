//UVa Problem-10141(Request for Proposal)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char garbage[100],winner[100],tmp_name[100];
    int n,r,maximum,tmp_maximum,kase=1;
    double cost,tmp;
    while(cin>>n>>r && n){
        if(kase>1)
            cout<<endl;
        scanf("%c",garbage);
        maximum=0;
        cost=10000000;
        for(int i=0;i<n;i++)
            gets(garbage);
        for(int i=0;i<r;i++){
            gets(tmp_name);
            cin>>tmp>>tmp_maximum;
            getchar();
            if(tmp_maximum>maximum){
                maximum=tmp_maximum;
                cost=tmp;
                memcpy(winner,tmp_name,100);
                }
            else if(tmp_maximum==maximum && tmp<cost){
                cost=tmp;
                memcpy(winner,tmp_name,100);
                }
            for(int j=0;j<tmp_maximum;j++)
                gets(garbage);
            }
        cout<<"RFP #"<<kase++<<endl<<winner<<endl;
        }
    return 0;
    }
