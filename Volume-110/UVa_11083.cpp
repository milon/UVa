//UVa Problem-11083(Zeroes Revisited)
//Accepted
//Running time: 0.020 sec

#include<iostream>
using namespace std;

long long sum(long long a){
    return a*(a+1)/2;
    }

long long solve(long long n,long long b){
    long long ret=0;
    for(long long i=b;i<=n;i*=b){
        long long t=(i-(n%i+1))%i;
        ret+=i*sum(n/i)-t*(n/i);
        }
    return ret;
    }

long long getmaxp(long long a){
    long long ret=1;
    for(long long i=2;i*i <= a;i+=2){
        if(a%i==0){
            ret=i;
            while(a%i==0)
                a/=i;
            }
        if(i==2)
            i=1;
        }
    return a!=1?a:ret;
    }

int main(){
    long long n;
    int b;
    while(cin>>n>>b && b){
        b=getmaxp(b);
        cout<<solve(n,b)<<endl;
        }
    return 0;
    }
