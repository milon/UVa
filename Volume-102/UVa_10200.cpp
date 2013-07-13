//UVa Problem-10200(Prime Time)
//Accepted
//Running time: 0.048 sec

#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

#define N 1000000

bool mark[N];
vector<int> primeList;

void sieve(){
    memset(mark,true,sizeof(mark));
    mark[0]=mark[1]=false;
    for(int i=4;i<N;i+=2)
        mark[i]=false;
    for(int i=3;i*i<=N;i++){
        if(mark[i]){
            for(int j=i*i;j<N;j+=2*i)
                mark[j]=false;
            }
        }
    primeList.clear();
    primeList.push_back(2);
    for(int i=3;i<N;i+=2){
        if(mark[i])
            primeList.push_back(i);
        }
    }

bool isPrime(int n){
    if(n<N)
        return mark[n];
    int index=0;
    while(primeList[index]*primeList[index]<=n){
        if(n%primeList[index]==0)
            return false;
        index++;
        }
    return true;
    }

int main(){
    sieve();
    bool save[10000+10];
    memset(save,false,sizeof(save));
    for(int i=0;i<=10000;i++){
        int num=i*i+i+41;
        if(isPrime(num))
            save[i]=true;
        }
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int cnt=0;
        for(int i=a;i<=b;i++){
            if(save[i])
                cnt++;
            }
        printf("%.2lf\n",(cnt*100.0)/(double)(b-a+1)+1e-9);
        }
    return 0;
    }
