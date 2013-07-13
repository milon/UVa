//UVa Problem-10852(Less Prime)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int prime_check(int a){
    if(a==1)  return 0;
    if(a==2)  return 1;
    if(a%2==0) return 0;
    for(int i=3;i*i<=a;i+=2)
        if(a%i==0) return 0;
    return 1;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n;
        k=n/2+1;
        while(true){
            if(prime_check(k)){
                cout<<k<<endl;
                break;
                }
            k++;
            }
        }
    return 0;
    }
