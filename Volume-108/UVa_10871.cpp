//UVa Problem-10871(Primed Subsequence)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

bool isPrime(int a){
    if(a==1)
        return false;
    if(a==2)
        return true;
    if(a%2==0)
        return false;
    for(int i=3;i*i<=a;i+=2)
        if(a%i==0)
            return false;
    return true;
    }

int main(){
    int kase;
    cin>>kase;
    while(kase--){
        int n,i,j;
        bool suru=false;
        cin>>n;
        int a[n];
        int s[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            s[0] =a[0];
        for(int i=1;i<n;i++)
            s[i]=s[i-1]+a[i];
        for(i=1;!suru && i<n;i++){
            for(j=0;!suru && j+i<n;j++){
                if(isPrime(s[j+i]-s[j]+a[j])){
                    suru=true;
                    }
                if(suru)
                    break;
                }
            if(suru)
                break;
            }
        if(suru){
            cout<<"Shortest primed subsequence is length "<<i+1<<":";
            for(int t=0;t<=i;t++)
                cout<<' '<<a[t+j];
            cout<<endl;
            }
        else
            cout<<"This sequence is anti-primed."<<endl;
        }
    return 0;
    }
