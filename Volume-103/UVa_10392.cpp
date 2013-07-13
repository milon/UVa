//UVa Problem-10392(Factoring Large Numbers)
//Accepted
//Running time: 0.036 sec

#include<iostream>
using namespace std;

void solve(long long in){
    if(in==1){
        cout<<"    "<<1<<endl;
        return;
        }
    for(long long i=2;i*i<=in && i<=1000000;i++){
        if(!(in%i)){
            while(!(in%i) && (in/i)){
                cout<<"    "<<i<<endl;
                in/=i;
                }
            }
        }
    if(in!=1)
        cout<<"    "<<in<<endl;
    cout<<endl;
    }

int main(){
    long long suru;
    while(cin>>suru && suru>=0)
        solve(suru);
    return 0;
    }
