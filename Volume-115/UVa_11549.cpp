//UVa Problem-11549(CALCULATOR CONUNDRUM)
//Accepted
//Running time: 1.740 sec

#include<iostream>
#include<map>
using namespace std;

long firstN(long k,int n){
    char suru[30];
    sprintf(suru,"%ld",k);
    suru[n]=0;
    return atol(suru);
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        long k;
        cin>>n>>k;
        map<long,bool> milon;
        long maximum=k;
        while(!milon[k]){
            milon[k]=true;
            k*=k;
            k=firstN(k,n);
            maximum=(maximum>k)?maximum:k;
            }
        cout<<maximum<<endl;
        }
    return 0;
    }
