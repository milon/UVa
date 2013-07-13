//UVa Problem-10223(How many nodes ?)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<map>
using namespace std;

const int n=35;

int main(){
    map<long long,int>m;
    long long tree[n];
    tree[0]=1;
    tree[1]=1;
    for(int i=2;i<n;i++){
        tree[i]=0;
        for(int j=0;j<i;j++)
            tree[i]+=tree[j]*tree[i-1-j];
        }
    for(int i=0;i<n;i++)
        m[tree[i]]=i;
    long long suru;
    while(cin>>suru && suru){
        cout<<m[suru]<<endl;
        }
    return 0;
    }
