//UVa Prblem-11247(Income Tax)
//Accepted
//Running time: 0.104 sec

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define ERR 1e-10

int main(){
    int m,x;
    double mm,t,res;
    while(cin>>m>>x && m||x){
        if(x==100 || x==0){
            cout<<"Not found"<<endl;
            continue;
            }
        mm=m;
        res=100*(mm-1)/(100-x);
        if(res-(t=floor(res))>ERR)
            res=t;
        else
            res=t-1;
        if(res>=m)
            printf("%.0lf\n",res);
        else
            cout<<"Not found"<<endl;
        }
    return 0;
    }
