//UVa Problem-11246(K-Multiple Free set)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

int solve(int n,int k){
    int ret=0;
    while(n!=0){
        int tmp=n/k+1;
        ret+=(n-tmp)+1;
        n=n/k/k;
        }
    return ret;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
        }
    return 0;
    }
