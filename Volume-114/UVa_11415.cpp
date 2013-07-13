//UVa Problem-11415(Count the Factorials)
//Accepted
//Running time: 0.552 sec

#include<iostream>
#include<algorithm>
using namespace std;

const int N = 3000001;
int c[N];
int b[N]={0};
int d[N]={0};
int p[N]={0};

int makeprime(){
    for(int i=0;i<N;i++)
        d[i]=i%2;
    d[2]=1;
    d[1]=0;
    d[0]=0;
    for(int i=3;i*i<=N;i+=2)
        if(d[i])
            for(int j=2*i;j<N;j+=i)
                d[j]=0;
    int index=0;
    p[index++]=2;
    for(int i=3;i<N;i+=2)
        if(d[i])
            p[index++]=i;
    return index;
    }

int count(int a,int index){
    int ret=0;
    for(int i=0;i<index && p[i]<=a && p[i]*p[i]<=a;i++){
        while(a%p[i]==0 && a/p[i]>0){
            a/=p[i];
            ret++;
            if(b[a]!=0)
                return ret+(a==1?0:b[a]);
            }
        }
    if(a!=1)
        ret++;
    return ret;
    }

int main(){
    int index=makeprime();
    c[0]=1;
    b[0]=1;
    c[1]=1;
    b[1]=1;
    c[2]=1;
    b[2]=1;
    for(int i=3;i<N;i++){
        b[i]=count(i,index);
        c[i]=c[i-1]+b[i];
        }
    int n;
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        int ans=upper_bound(c,c+N,n)-c;
        cout<<ans<<endl;
        }
    return 0;
    }
