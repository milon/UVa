//UVa Problem-11984(A Change in Thermal Unit)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        int c,d;
        cin>>c>>d;
        double f=(double)((d-32)*5)/9;
        double zero=(double)((0-32)*5)/9;
        double diff=f-zero;
        cout<<"Case "<<++kase<<": ";
        printf("%.2lf\n",(double)(c+diff));
        }
    return 0;
    }
