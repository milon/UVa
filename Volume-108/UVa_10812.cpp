//UVa Problem-10812(Beat the Spread!)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    int sum,dif,a,b,t;
    cin>>t;
    while(t--){
        cin>>sum>>dif;
        a=sum+dif;
        b=sum-dif;
        if((a%2)||(b%2)||(b<0))
            cout<<"impossible"<<endl;
        else
            cout<<(a/2)<<" "<<(b/2)<<endl;
        }
    return 0;
    }
