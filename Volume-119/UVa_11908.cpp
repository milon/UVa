//UVa Problem-11908(Skyscraper)
//Accepted
//Running time: 0.408 sec
//Author: Milon

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

#define N 200000

struct floors{
	int start;
	int end;
	int cost;
    }suru[30000+10];

int dp[N+10];

bool cmp(floors p,floors q){
	if(p.start<q.start)
        return true;
    return false;
    }

int main(){
	int test;
	cin>>test;
	int kase=0;
	while(test--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>suru[i].start>>suru[i].end>>suru[i].cost;
			suru[i].start++;	                            //starting floor
			suru[i].end=suru[i].end+suru[i].start-1;		// ending floor
            }
		sort(suru,suru+n,cmp);
		memset(dp,0,sizeof(dp));
		int ind=0;
		int accu_cost=0;
		for(int i=1;i<N+10;i++){
			while(ind<n && suru[ind].start==i){
				int p=dp[i-1]+suru[ind].cost;
				if(dp[suru[ind].end]<p)
                    dp[suru[ind].end]=p;
				ind++;
                }
			if(accu_cost<dp[i])
                accu_cost=dp[i];
            dp[i]=accu_cost;
            }
		int maxi=0;
		for(int i=0;i<N+10;i++){
            if(maxi<dp[i])
                maxi=dp[i];
            }
		cout<<"Case "<<++kase<<": "<<maxi<<endl;
        }
	return 0;
    }
