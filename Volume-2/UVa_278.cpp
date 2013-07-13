//UVa Problem-278(Chess)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int ceil(int a,int div){
    return a/div+(a%div?1:0);
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        char in;
        int m,n;
        cin>>in>>m>>n;
        if(in=='r')
            cout<<min(m,n)<<endl;
        else if(in=='k'){
            if(m==1 || n==1)
                cout<<max(m,n)<<endl;
            else
                cout<<ceil(m*n,2)<<endl;
            }
        else if(in=='K')
            cout<<ceil(n,2)*ceil(m,2)<<endl;
        else if(in=='Q')
            cout<<min(m,n)<<endl;
        }
    return 0;
    }
