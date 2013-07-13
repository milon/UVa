//UVa Problem-10891(Game of Sum)
//Accepted
//Running time: 0.180 sec

#include<iostream>
using namespace std;

const int inf=(1<<25);

int suru[2][100][100];
int sum[100][100];

int solve(bool who,int l,int r){
    if(l>r)
        return 0;
    int &ret=suru[who][l][r];
    if(ret== -inf){
        ret= -inf+1;
        for(int i=l;i<r+1;i++){
            int tmp1=0,tmp2=0;
            if(i+1<=r)
                tmp1=sum[i+1][r];
            if(i-1>=0)
                tmp2=sum[l][i-1];
            ret=max(ret,sum[l][i]+tmp1-solve(!who,i+1,r));
            ret=max(ret,sum[i][r]+tmp2-solve(!who,l,i-1));
            }
        }
    return ret;
    }

int main(){
    int n,in[100];
    while(cin>>n && n){
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                suru[0][i][j]=suru[1][i][j]= -inf;
                sum[i][j]=0;
                }
        for(int i=0;i<n;i++)
            cin>>in[i];
        for(int i=0;i<n;i++){
            sum[i][i]=in[i];
            for(int j=i+1;j<n;j++)
                sum[i][j]=sum[i][j-1]+in[j];
            }
        int a=solve(0,0,n-1);
        int b=sum[0][n-1]-a;
        cout<<(a-b)<<endl;
        }
    return 0;
    }
