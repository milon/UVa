//UVa Problem-10493(Cats, with or without Hats)
//Accepted
//Running time: 0.020 sec

#include<iostream>
using namespace std;

int main(){
    long n,m;
    while(cin>>n>>m){
        if(n==0 && m==0)
            break;
        if(n==1){
            if(m==1){
                cout<<n<<" "<<m<<" Multiple"<<endl;
                continue;
                }
            else{
                cout<<n<<" "<<m<<" Impossible"<<endl;
                continue;
                }
            }
        if((m-n)%(n-1)==0){
            cout<<n<<" "<<m<<" "<<(n+1)+n*((m-n)/(n-1))<<endl;
            }
        else
            cout<<n<<" "<<m<<" Impossible"<<endl;
        }
    return 0;
    }
