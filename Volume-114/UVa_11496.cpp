//UVa Problem-11496(Musical Loop)
//Accepted
//Running time: 0.028 sec

#include<iostream>
using namespace std;

#define MAX 10010

int main(){
    int n,cnt,suru[MAX];
    while(cin>>n && n){
        for(int i=0;i<n;i++)
            cin>>suru[i];
        suru[n]=suru[0];
        suru[n+1]=suru[1];
        cnt=0;
        for(int i=1;i<=n;i++){
            if((suru[i-1]>suru[i] && suru[i+1]>suru[i]) || (suru[i-1]<suru[i] && suru[i+1]<suru[i]))
                cnt++;
            }
        cout<<cnt<<endl;
        }
    return 0;
    }
