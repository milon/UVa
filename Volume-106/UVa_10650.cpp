//UVa Problem-10650(Determinate Prime)
//Accepted
//Running time: 0.020 sec

#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

#define N 1<<15

bool mark[N];
vector<int> prime;

void sieve(){
    memset(mark,true,sizeof(mark));
    mark[0]=mark[1]=false;
    for(int i=4;i<N;i+=2)
        mark[i]=false;
    for(int i=3;i*i<=N;i+=2){
        if(mark[i]){
            for(int j=i*i;j<N;j+=2*i)
                mark[j]=false;
            }
        }
    prime.clear();
    prime.push_back(2);
    for(int i=3;i<N;i+=2){
        if(mark[i])
            prime.push_back(i);
        }
    }

void print(int here,int there){
    printf("%d",prime[here]);
    for(int i=here+1;i<=there;i++)
        printf(" %d",prime[i]);
    printf("\n");
    }

int main(){
    sieve();
    int x,y;
    while(scanf("%d %d",&x,&y)){
        if(x==0 && y==0)
            break;
        if(x>y)
            swap(x,y);
        size_t i=0;
        while(prime[i]<x)
            i++;
        while(prime[i+2]<=y){
            if(prime[i+2]-prime[i+1]==prime[i+1]-prime[i]){
                int start=i;
                int end=i+2;
                int diff=prime[i+1]-prime[i];
                while(i+3<prime.size() && prime[i+3]-prime[i+2]==diff){
                    end++;
                    i++;
                    }
                if(prime[end]<=y){
                    if(start==0 || prime[start]-prime[start-1]!=diff)
                        print(start,end);
                    }
                else break;
                }
            i++;
            }
        }
    return 0;
    }
