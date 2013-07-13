//UVa Problem-12028(A Gift from the Setter)
//Accepted
//Running time: 0.492 sec
//Author: Milon

#include <cstdio>
#include <algorithm>
using namespace std;

long long a[100000+10];
long long sum[100000+10];

int main(){
    int test;
    scanf("%d",&test);
    int cases=0;
    while(test--){
        long long k,c,n;
        scanf("%lld %lld %lld %lld",&k,&c,&n,&a[0]);
        for(int i=1;i<n;i++)
            a[i]=(k*a[i-1]+c)%1000007;
        sort(a,a+n);
        for(int i=0;i<n;i++)
            sum[i]=a[i];
        for(int i=1;i<n;i++)
            sum[i]+=sum[i-1];
        long long sum1=0;
        for(int i=0;i<n;i++){
            long long first=a[i]*(n-i-1);
            long long second=sum[n-1]-sum[i];
            sum1+=abs(first-second);
            }
        printf("Case %d: %lld\n",++cases,sum1);
        }
    return 0;
    }
