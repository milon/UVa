//UVa Problem-332(Rational Numbers from Repeating Fractions)
//Accepted
//Running time: 0.136 sec
//Author: Milon

#include<iostream>
#include<algorithm>
using namespace std;


typedef long long ll;

void getdata(int d,string in,int &k,int &j,long long &a,long long &b,long long &X){
    j=d;
    k=in.size()-2-d;
    b=0;
    a=0;
    X=0;
    for(int i=0;i<j;i++)
        b=b*10+in[2+k+i]-'0';
    for(int i=0;i<k;i++)
        a=a*10+in[2+i]-'0';
    for(int i=2;i<in.size();i++)
        X=X*10+in[i]-'0';
    }

int main(){
    long long pow10[100];
    pow10[0]=1;
    for(int i=1;i<100;i++)
        pow10[i]=pow10[i-1]*10;
    int d;
    string in;
    int tc=1;
    while(cin>>d>>in && d!=-1){
        int k,j;
        long long a,b,X;
        getdata(d,in,k,j,a,b,X);
        long long u=X-a,d=pow10[k+j]-pow10[k];
        if(j==0){
            u=X;
            d=pow10[k];
            }
        long long g=__gcd(u,d);
        cout<<"Case "<<tc++<<": "<<u/g<<"/"<<d/g<<endl;
        }
    return 0;
    }
