//UVa Problem-10622(Perfect Pth Powers)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cmath>
using namespace std;

long long power_up(int i,int p){
    long long sum=i;
    for(int k=2;k<=p;k++)
        sum*=i;
    return sum;
    }

int main(){
    double n;
    while(cin>>n && n){
        bool suru=false;
        int len;
        if(n<0){
            len=(int)sqrt(n * -1);
            for(int i= -2;i>= -len;i--){
                long long ans=i;
                int p=2;
                while(ans>n){
                    ans=power_up(i,p);
                    p++;
                    }
                if(ans==n){
                    cout<<p-1<<endl;
                    suru=true;
                    break;
                    }
                }
            if(!suru)
                cout<<"1"<<endl;
            }
        else{
            len=(int)sqrt(n);
            for(int i=2;i<=len;i++){
                long long ans=i;
                int p=2;
                while(ans<n){
                    ans=power_up(i,p);
                    p++;
                    }
                if(ans==n){
                    cout<<p-1<<endl;
                    suru=true;
                    break;
                    }
                }
            if(!suru)
                cout<<"1"<<endl;
            }
        }
    return 0;
    }
