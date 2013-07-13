//UVa Problem-623(500!)
//Accepted
//Running time: 0.160 sec
//Author: Milon

#include<iostream>
using namespace std;

#define max 1001
#define len 2600

int num[max][len];

void factorial(){
    int i,j;
    num[0][0]=num[1][0]=1;
    for(i=2;i<max;i++){
        for(j=0;j<len;j++){
            num[i][j] += num[i-1][j]*i;
            if(num[i][j]>9){
                num[i][j+1] += num[i][j]/10;
                num[i][j]%=10;
                }
            }
        }
    }

int main(){
    int n,i;
    factorial();
    while(cin>>n){
        cout<<n<<"!"<<endl;
        for(i=len-1;i>0;i--)
            if(num[n][i]!=0)
                break;
        for(;i>=0;i--)
            cout<<num[n][i];
        cout<<endl;
        }
    return 0;
    }
