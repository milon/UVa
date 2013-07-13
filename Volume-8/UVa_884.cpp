//UVa Problem-884(Factorial Factors)
//Accepted
//Running time: 1.076 sec

#include<iostream>
using namespace std;

const int N=1000001;
int num[N];

int factor(int suru){
    int ret=0;
    for(int i=2;i*i<=suru;i++){
        if (suru%i == 0){
            while(suru/i>0&&suru%i==0){
                suru/=i;
                ret++;
                }
            }
        }
    if(suru != 1)ret++;
    return ret;
    }

int main(){
    num[1]=0;
    for(int i=2;i<N;i++){
        num[i]=factor(i)+num[i-1];
        }
    int n;
    while(cin>>n)
        cout << num[n]<<endl;
    return 0;
    }
