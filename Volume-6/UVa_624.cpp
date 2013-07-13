//UVa Problem-624(CD)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<iostream>
#include<string>
using namespace std;

#define max 10005

int c[max],suru[25];
bool p[25][max];

int main(){
    int n,w;
    while(cin>>w){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>suru[i];
            }
        memset(c,0,sizeof(c));
        memset(p,false,sizeof(p));
        for(int i=n;i;i--){
            for(int j=w;j>=suru[i];j--){
                if(c[j]<c[j-suru[i]]+suru[i]){
                    c[j]=c[j-suru[i]]+suru[i];
                    p[i][j]=true;
                    }
                }
            }
        for(int i=1,j=w;i<=n;i++){
            if(p[i][j]){
                cout<<suru[i]<<" ";
                j-=suru[i];
                }
            }
        cout<<"sum:"<<c[w]<<endl;
        }
    return 0;
    }
