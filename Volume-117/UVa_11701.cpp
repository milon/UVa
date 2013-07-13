//UVa Problem-11701(Cantor)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
using namespace std;

class state{
    public:
        double a;
        bool operator<(const state &b)const{
            if(abs(a-b.a)<1e-7)
                return false;
            else
                return a<b.a;
            }
    };

bool calc(double a){
    state ini={a};
    set<state> S;
    while(true){
        ini.a=a-floor(a);
        if(S.find(ini)!=S.end())
            return false;
        S.insert(ini);
        a*=3;
        int t=(int)a;
        if(t==1)
            return true;
        a=a-floor(a);
        }
    return false;
    }

int main(){
    double a;
    while(cin>>a){
        while(a>=1)
            a/=10.;
        if(calc(a))
            puts("NON-MEMBER");
        else
            puts("MEMBER");
        }
    return 0;
    }
