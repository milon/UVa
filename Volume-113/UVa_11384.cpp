//UVa Problem-11384(Help is needed for Dexter)
//Accepted
//Running time: 0.268 sec

#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        int cnt=0;
        while(n!=1){
            n/=2;
            cnt++;
            }
        cout<<cnt+1<<endl;
        }
    return 0;
    }
