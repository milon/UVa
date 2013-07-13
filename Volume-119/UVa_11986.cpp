//UVa Problem-11986(Save from Radiation)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<iostream>
#include<cstdio>
using namespace std;

int bottle_count(long long s){
    long long result=1;
    int power=0;
    if(s<2)
        return 0;
    while(true){
        result*=2;
        power++;
        if(s<=result)
            return power;
        }
    }

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        n++;
        printf("Case %d: %d\n",++kase,bottle_count(n));
        }
    return 0;
    }
