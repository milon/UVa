//UVa Problem-11388(GCD LCM)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long gcd,lcm;
        cin>>gcd>>lcm;
        if(lcm%gcd)
            cout<<"-1"<<endl;
        else
            cout<<gcd<<" "<<lcm<<endl;
        }
    return 0;
    }
