//UVa Problem-10489(Boxes of Chocolates)
//Accepted
//Running time: 0.128 sec

#include<iostream>
using namespace std;

int solve(int n,int b){
    int current=0;
    for(int i=0;i<b;i++){
        int m,temp=0;
        cin>>m>>temp;
        for(int j=1;j<m;j++){
            int in;
            cin>>in;
            temp=(temp*in)%n;
            }
        current=(current+temp)%n;
        }
    return current%n;
    }

int main(){
    int n,b,test;
    cin>>test;
    while(test--){
        cin>>n>>b;
        cout<<solve(n,b)<<endl;
        }
    return 0;
    }
