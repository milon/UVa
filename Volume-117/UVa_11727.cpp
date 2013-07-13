//UVa Problem-11727(Cost Cutting)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int t,a[3],i=1;
    cin>>t;
    while(t--){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Case "<<i++<<": "<<a[1]<<endl;
        }
    return 0;
    }
