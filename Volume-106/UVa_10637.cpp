//UVa Problem-10637(Coprimes)
//Accepted
//Running time: 2.648 sec

#include<iostream>
#include<algorithm>
using namespace std;

int n,num,suru[50];

void back(int x,int last,int num){
    if(x>1){
        for(int i=0;i<x-1;++i){
            if(__gcd(suru[i],suru[x-1])!=1)
                return;
            }
        }
    if(x==n){
        if(num)
            return;
        cout<<suru[0];
        for(int i=1;i<n;++i)
            cout<<" "<<suru[i];
        cout<<endl;
        return;
        }
    for(int i=last;i<=num;++i){
        suru[x]=i;
        back(x+1,i,num-i);
        }
    }

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        cin>>num>>n;
        cout<<"Case "<<++kase<<":"<<endl;
        back(0,1,num);
        }
    return 0;
    }
