//UVa Problem-10579(Fibonacci Numbers)
//Accepted
//Running time: 0.112 sec

#include<iostream>
using namespace std;

#define max 5002
#define len 1002

int fibo[max][len];

void fibonacci(){
    int i,j,k;
    fibo[0][0]=0;
    fibo[1][0]=1;
    for(i=2;i<max;i++){
        for(j=0;j<len;j++){
            fibo[i][j]+=fibo[i-1][j]+fibo[i-2][j];
            if(fibo[i][j]>9){
                fibo[i][j+1]+=fibo[i][j]/10;
                fibo[i][j]%=10;
                }
            }
        }
    }

int main(){
    fibonacci();
    int n,i,j;
    while(cin>>n){
        for(i=len-1;i>0;i--)
            if(fibo[n][i]!=0)
                break;
        for(;i>=0;i--)
            cout<<fibo[n][i];
        cout<<endl;
        }
    return 0;
    }
