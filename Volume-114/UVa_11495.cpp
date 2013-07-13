//UVa problem-11495(Bubbles and Buckets)
//Accepted
//Running time: 0.936 sec

#include<iostream>
#include<cstring>
using namespace std;

#define N 1000000

unsigned long long tree[4*N];

unsigned long long greater_than_input(int at,int low,int high,int x){
    if(high<=x)
        return 0;
    if(low>x)
        return tree [at];
    int mid=(low+high)/2;
    return greater_than_input(2*at,low,mid,x)+greater_than_input(2*at+1,mid+1,high,x);
    }

void insert(int at,int low,int high,int x){
    if(low==high){
        tree[at]=1;
        return;
        }
    if(x<low||x>high)
        return;
    int mid=(low+high)/2;
    if(x<=mid)
        insert(2*at,low,mid,x);
    else
        insert(2*at+1,mid+1,high,x);
    tree[at]++;
    }

int main(){
    int n;
    while(cin>>n && n){
        memset(tree,0,sizeof(tree));
        int input;
        unsigned long long swaps = 0;
        for(int i=0;i<n;i++){
            cin>>input;
            insert(1,1,n,input);
            swaps+=greater_than_input(1,1,n,input);
            }
        if(swaps%2)
            cout<<"Marcelo"<<endl;
        else
            cout<<"Carlos"<<endl;
        }
	return 0;
    }
