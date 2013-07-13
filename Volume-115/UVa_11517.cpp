//UVa Problem-11517(Exact Change)
//Accepted
//Running time: 0.032 sec

#include<iostream>
#include<limits>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int bill,coin_number;
        cin>>bill>>coin_number;
        int coin[100];
        for(int i=0;i<coin_number;i++)
            cin>>coin[i];
        int dp[10000];
        for(int i=0;i<10000;i++)
            dp[i]=INT_MAX;
        dp[0]=0;
        for(int i=0;i<coin_number;i++){
            for(int j=10000;j>=0;j--){
                if(dp[j]!=INT_MAX && j+coin[i]<=10000 && dp[j+coin[i]]>dp[j]+1)
                    dp[j+coin[i]]=dp[j]+1;
                }
            }
        for(int i=bill;i<=10000;i++){
            if(dp[i]!=INT_MAX){
                cout<<i<<" "<<dp[i]<<endl;
                break;
                }
            }
        }
    return 0;
    }
