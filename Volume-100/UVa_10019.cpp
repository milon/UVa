//UVa Problem-10019(Funny Encryption Method)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    long counter[10000]={0};
    for(long q=1;q<10000;q++){
		int re[1000],i=0;
		long s=q;
		long g=1;
		while(g){
            g=s/2;
            re[i]=s%2;
            if(re[i]==1)
                counter[q]++;
            s=g;
            i++;
            }
        }
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        long m;
        cin>>m;
        long d2;
        int d1;
        int count=0,r=1;
        int d=counter[m];
        int a;
        for(a=10;m/a>0;a*=10);
        d2=(long)(m/10);
        d1=m%10;
        count+=counter[d1];
        r*=10;
        while(r!=a){
            d1=d2%10;
            d2=(long)(d2/10);
            count+=counter[d1];
            r*=10;
            }
        cout<<d<<" "<<count<<"\n";
        i++;
        }
    return 0;
    }
