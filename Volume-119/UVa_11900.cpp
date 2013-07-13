//UVa Problem-11900(Boiled Eggs)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    int test,kase=0,r;
    cin>>test;
    while(test--){
        int n,p,q,egg[40];
        cin>>n>>p>>q;
        for(int i=0;i<n;i++)
            cin>>egg[i];
        for(int w=r=0;r<p && r<n;){
            if(w+egg[r]>q)
                break;
            w+=egg[r++];
            }
        cout<<"Case "<<++kase<<": "<<r<<endl;
        }
    return 0;
    }
