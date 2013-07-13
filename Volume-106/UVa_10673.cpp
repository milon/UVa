//UVa Problem-10673(Play with Floor and Ceil)
//Accepted
//Running time: 0.012 sc

#include<iostream>
using namespace std;

int x,k,low,high;

int mod1(){
    return (x/k);
    }

int mod2(){
    return (x+k-1)/k;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int p,q;
        cin>>x>>k;
        low=mod1();
        high=mod2();
        for(p=0; ;++p){
            if((x-low*p)%high==0){
                q=(x-low*p)/high;
                break;
                }
            }
        cout<<p<<" "<<q<<endl;
        }
    return 0;
    }
