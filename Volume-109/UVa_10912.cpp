//UVa Problem-10912(Simple Minded Hashing)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

#define MAXN 355

int suru[27][MAXN];

int sum(int n,int m){
    int x,y,z;
    if(n==m)
        return n;
    x=n+m;
    y=m-n+1;
    return (x*y)/2;
    }

void gen(){
    int i,j,k,x,y;
    int max,min;
    suru[1][1]=suru[1][2]=1;
    suru[2][3] = 1;
    for(i=3;i<27;i++){
        x=i-1;
        for(j=i-1;j>=1;j--){
            max=sum(x-j+1,x);
            min=sum(1,j);
            for(k=min;k<=max;k++){
                suru[j+1][k+i]+=suru[j][k];
                }
            }
        suru[1][i] = 1;
        }
    }

int main(){
    int x,y,k=1;
    gen();
    while(cin>>x>>y){
        if(!x && !y)
            break;
        if(y>351)
            cout<<"Case "<<k++<<": "<<0;
        else
            cout<<"Case "<<k++<<": "<<suru[x][y];
        cout<<endl;
        }
    return 0;
    }
