//UVa Problem-11774(Doom's Day)
//Accepted
//Running time: 0.052 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test,c=0;
    cin>>test;
    while(test--){
        int n,m,tmp;
        cin>>n>>m;
        if(n>m)
            swap(n,m);
        if(n!=m)
            cout<<"Case "<<++c<<": "<<(m+n)/(__gcd(m,n))<<endl;
        else
            cout<<"Case "<<++c<<": "<<2<<endl;
        }
    return 0;
    }
