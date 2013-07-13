//UVa Problem-10534(Wavio Sequence)
//Accepted
//Running time: 0.240 sec

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N=1000000;

int dp[N];
int dp1[N];
int dp2[N];
int pos[N];
int path[N];

void lis(vector<int> &in,int *ans){
    dp[0]=in[0];
    ans[0]=1;
    path[0]=-1;
    int n=1;
    for(int i=1;i<in.size();i++){
        int l=lower_bound(dp,dp+n,in[i])-dp;
        if(l==n){
            dp[n++]=in[i];
            ans[i]=l+1;
            }
        else{
            dp[l]=in[i];
            ans[i]=l+1;
            }
        }
    }

int main(){
    int n;
    while(cin>>n){
        vector<int> in(n);
        for(int i=0;i<n;i++)
            cin>>in[i];
        lis(in,dp1);
        reverse(in.begin(),in.end());
        lis(in,dp2);
        reverse(dp2,dp2+n);
        int ret=1;
        for(int i=0;i<n;i++){
            ret=max(ret,min(dp1[i],dp2[i]));
            }
        cout<<ret*2-1<<endl;
        }
    return 0;
    }
