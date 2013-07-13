//UVa Problem-10790(How Many Points of Intersection?)
//Accepted
//Running time: 0.028 sec

#include<iostream>
using namespace std;

int main(){
    unsigned long long a,b,kase=0;
    while(cin>>a>>b && a && b){
        unsigned long long suma=0,sumb=0;
        for(unsigned long long i=1;i<a;i++)
            suma+=i;
        for(unsigned long long i=1;i<b;i++)
            sumb+=i;
        unsigned long long result = suma*sumb;
        cout<<"Case "<<++kase<<": "<<result<<endl;
        }
    return 0;
    }
