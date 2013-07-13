//UVa Problem-10130(SuperSale)
//Accepted
//Running time: 0.056 sec

#include <iostream>
#include<cstring>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int objects;
        int values[1000+5];
        int weight[1000+5];
        cin>>objects;
        for(int i=0;i<objects;i++)
            cin>>values[i]>>weight[i];
        int dp[30+5];
        memset(dp,0,sizeof(dp));
        for(int j=0;j<objects;j++){
            for(int i=32;i>=0;i--){
                if(weight[j]<=i && dp[i]<dp[i-weight[j]]+values[j])
                    dp[i]=dp[i-weight[j]]+values[j];
                }
            }
        int suru;
        cin>>suru;
        int maxPrice=0;
        while(suru--){
            int volume;
            cin>>volume;
            maxPrice+=dp[volume];
            }
        cout<<maxPrice<<endl;
        }
	return 0;
    }

