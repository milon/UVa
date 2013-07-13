//UVa Problem-10025(The ? 1 ? 2 ? ... ? n = k problem)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int solve(int k){
    int now=1,sum=0;
    while(true){
        sum+=now;
        if(sum>=k && (sum-k)%2==0)
            return now;
        now++;
        }
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int k;
        cin>>k;
        cout<<solve(k<0?k*-1:k)<<endl;
        if(test)
            cout<<endl;
        }
    return 0;
    }
