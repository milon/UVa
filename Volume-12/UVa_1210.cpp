//UVa Problem-1210(Sum of Consecutive Prime Numbers)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

#define MAX 10000

bool prime[MAX+1];
int count[MAX+1];
vector<int> p;

void sieve(){
    memset(prime,true,sizeof prime);
    p.clear();
    prime[0]=prime[1]=false;
    for(int i=2;i<=MAX;i++){
        if(prime[i]){
            p.push_back(i);
            for(int j=i*i;j<=MAX;j+=i)
                prime[j]=false;
            }
        }
    }

void calc(){
    memset(count,0,sizeof count);
    int n=p.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=p[j];
            if(sum>MAX)
                continue;
            ++count[sum];
            }
        }
    }

int main(){
    sieve();
    calc();
    while(true){
        int n;
        scanf("%d",&n);
        if(!n)
            break;
        printf("%d\n",count[n]);
        }
    return 0;
    }
