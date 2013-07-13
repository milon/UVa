//UVa Problem-11121(Base -2)
//Accepted
//Running time: 0.068 sec

#include<iostream>
using namespace std;

void base(int n){
    if(n==1)
        cout<<1;
    else if(n%2){
        base((n-1)/-2);
        cout<<1;
        }
    else{
        base(n/-2);
        cout<<0;
        }
    }

int main(){
    int m,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        cout<<"Case #"<<i+1<<": ";
        if(m==0)
            cout<<0;
        else
            base(m);
        cout<<endl;
        }
    return 0;
    }
