//UVa Problem-11078(Open Credit System)
//Accepted
//Running time: 0.360 sec

#include<iostream>
#include<algorithm>
using namespace std;

int solve(int n){
    int tmax,tmin,ans=-150000,tmp;
    cin>>tmax;
    tmin=tmax;
    for(int i=1;i<n;i++){
        cin>>tmp;
        ans=max(ans,max(tmax-tmp,tmin-tmp));
        tmin=min(tmp,tmin);
        tmax=max(tmp,tmax);
        }
    return ans;
    }

int main(){
    int test,n;
    cin>>test;
    while(test--){
        cin>>n;
        cout<<solve(n)<<endl;
        }
    return 0;
    }
