//UVa Problem-11715(Car)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    double s,v,u,a,t,d,b,c;
    int kase=1,n;
    while(cin>>n && n){
        if(n==1){
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=u*t+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",kase,s,a);
            }
        else if(n==2){
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=u*t+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",kase,s,t);
            }
        else if(n==3){
            cin>>u>>a>>s;
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",kase,v,t);
            }
        else{
            cin>>v>>a>>s;
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",kase,u,t);
            }
        kase++;
        }
    return 0;
    }
