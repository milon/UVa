//UVa Problem-562(Dividing coins)
//Accepted
//Running time: 0.028 sec
//Author: Milon

#include<iostream>
#include<cstring>
using namespace std;

#define N 101
#define M 25001

bool  v[M];

int iabs(int n){
    return (n>0)?n:-n;
    }
int main(){
    int i,j,no_of_prob,no_of_coins,m,sum,a[N];
    cin>>no_of_prob;
    while(no_of_prob--){
        cin>>no_of_coins;
        for(sum =0,i=1;i<=no_of_coins;i++){
            cin>>a[i];
            sum+=a[i];
            }
        m=sum/2;
        memset(v,0,sizeof(v));
        v[0]=true;
        for(i=1;i<=no_of_coins;i++)
            for(j=m;j>=1;j--)
                if(!v[j])
                    v[j]=(a[i]<=j)?v[j-a[i]]:false;
        for(j=m;j>=1;j--)
            if(v[j])
                break;
        cout<<iabs(sum-j*2)<<endl;
        }
    return 0;
    }
