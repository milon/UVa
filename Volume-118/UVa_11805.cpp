//UVa Problem-11805(Bafana Bafana)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

int main(){
    int test,index=0;
    cin>>test;
    while(test--){
        int n,k,p;
        cin>>n>>k>>p;
        for(int i=0;i<p;i++){
            k++;
            if(k==n+1)
                k=1;
            }
        cout<<"Case "<<++index<<": "<<k<<endl;
        }
    return 0;
    }
