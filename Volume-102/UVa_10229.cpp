//UVa Problem-10229(Modular Fibonacci)
//Accepted
//Running time: 0.048 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long i;
    long n,m,remainder,rem_1,rem_2,b,length;
    while(cin>>n>>m){
        if(!n){
            cout<<0<<endl;
            continue;
            }
        if(!m){
            cout<<0<<endl;
            continue;
            }
        b=3;
        for(long i=1;i<m;i++)
            b*=2;
        length=n%b;
        if(length==0)
            length=b;
        m=pow((long)2,m);
        rem_1=0;
        rem_2=1;
        for(long i=1;i<=length;i++){
            remainder=(rem_1+rem_2)%m;
            rem_2=rem_1;
            rem_1=remainder;
            }
        cout<<remainder<<endl;
        }
    return 0;
    }
