//UVa Problem-10042(Smith Numbers)
//Accepted
//Running time: 0.084 sec

#include<iostream>
#include<cmath>
using namespace std;

int const max_primes=31623;
bool primes[max_primes];

void gen_primes(){
    primes[0]=primes[1]=false;
    for(int i=2;i<max_primes;++i)
        primes[i]=true;
    for(int i=2;i<max_primes;++i){
        for( ;i<max_primes && !primes[i];++i){}
        for(int j=2;i*j<max_primes;++j)
            primes[i*j]=false;
        }
    }

bool is_smith(int n){
    int s1=0;
    for(int m=n;m!=0;m/=10)
        s1+=m%10;
    int s2=0;
    int f=2,mf=sqrt(n)+1;
    for( ;n>=f && f<mf && s2<=s1;++f){
        if(!primes[f])
            continue;
        if(n%f==0){
            int s=0;
            for(int m=f;m!=0;m/=10)
                s+=m%10;
            for( ;n%f==0;n/=f)
                s2+=s;
            }
        }
    if(s2!=0 && n!=1)
        for(int m=n;m!=0;m/=10)
            s2+=m%10;
    return s1==s2;
    }

int main(){
    gen_primes();
    int ncases;
    cin>>ncases;
    for(int n;ncases>0 && cin>>n;--ncases){
        int m=n+1;
        for( ;!is_smith(m);++m){}
        cout<<m<<endl;
        }
    return 0;
    }
