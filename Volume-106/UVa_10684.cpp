//UVA Problem-10684(The jackpot)
//Accepted
//Running time: 0.248 sec

#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        int suru[10000];
        for(int i=0;i<n;i++)
            cin>>suru[i];
        int milon[10000];
        fill(milon,milon+10000,0);
        milon[0]=suru[0];
        for(int i=1;i<n;i++){
            if(milon[i-1]+suru[i]>suru[i])
                milon[i]=milon[i-1]+suru[i];
            else
                milon[i]=suru[i];
            }
        int maxm=0;
        for(int i=0;i<n;i++)
            maxm=max(maxm,milon[i]);
        if(maxm==0)
            cout<<"Losing streak."<<endl;
        else
            cout<<"The maximum winning streak is "<<maxm<<"."<<endl;
        }
    return 0;
    }
