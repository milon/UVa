//UVa Problem-11173(Grey Codes)
//Accepted
//Running time: 0.708 sec

#include<iostream>
using namespace std;

int main(){
    int test,j,k,g;
    cin>>test;
    while(test--){
        cin>>j>>k;
        g=k^(k>>1);
        cout<<g<<endl;
        }
    return 0;
    }
