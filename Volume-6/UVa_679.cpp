//UVa Problem-679(Dropping Balls)
//Accepted
//Running time: 0.300 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,d;
        cin>>n>>d;
        d--;
        int temp=(1<<(n-1));
        int ans=temp;
        temp/=2;
        while(d>0){
            if(d%2==1)
                ans+=temp;
            d/=2;
            temp/=2;
            }
        cout<<ans<<endl;
        }
    return 0;
    }
