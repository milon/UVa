//UVa Problem-11934(Magic Formula)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
using namespace std;

long long quad(long a,long b,long c,long x){
    return a*(x*x)+b*x+c;
    }

int main(){
    int a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l){
        if(!a && !b && !c && !d && !l)
            break;
        int cnt=0;
        for(int i=0;i<=l;i++)
            if(quad(a,b,c,i)%d==0)
                cnt++;
        cout<<cnt<<endl;
        }
    return 0;
    }
