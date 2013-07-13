//UVa Problem-10254(The Priest Mathematician)
//Accepted
//Running time: 0.064 sec

#include<iostream>
#include<string>
using namespace std;

#define N 10000
#define M 150
#define bsize 64

struct bigint{
    char element[bsize];
    int size;
    bigint(){
        memset(element,0,bsize);
        size=1;
        }
    friend ostream& operator <<(ostream& os, const bigint& suru){
        for(int i=suru.size-1;i>=0;i--)
            os<<(int)suru.element[i];
        return os;
        }
    friend bigint operator +(const bigint& suru,const bigint& milon){
        bigint love;
        love.size=max(suru.size,milon.size);
        for(int i=0,temp=0;i<love.size;i++){
            temp+=suru.element[i]+milon.element[i];
            love.element[i]=temp%10;
            temp/=10;
            if((i==love.size-1) && temp)
                love.size++;
            }
        return love;
        }
    };

bigint k3[N+1],pow2[M];

int main(){
    pow2[0].element[0]=1;
    for(int i=1;i<M;i++)
        pow2[i]=pow2[i-1]+pow2[i-1];
    for(int i=1,j=1,k=1;i<=N;i++,j++){
        if(j>k){
            j=1;
            k++;
            }
        k3[i]=k3[i-1]+pow2[k-1];
        }
    int n;
    while(cin>>n){
        cout<<k3[n]<<endl;
        }
    return 0;
    }
