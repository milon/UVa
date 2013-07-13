//UVa Problem-10791(Minimum Sum LCM)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

long long solve(long long n){
    long long tmp=n,ans=0;
    for(long long i=2;i*i<=tmp;i++){
        if(tmp%i==0){
            long long dif=1;
            while(true){
                if(tmp%i!=0 || tmp/i==0)
                    break;
                dif*=i;
                tmp/=i;
                }
            ans+=dif;
            if(dif==n)
                ans++;
            }
        }
    if(tmp==n)
        return n+1;
    else if(tmp!=1)
        ans+=tmp;
    return ans;
    }

int main(){
    int test=0;
    long long n;
    while(cin>>n && n){
        cout<<"Case "<<++test<<": "<<solve(n)<<endl;
        }
    return 0;
    }
