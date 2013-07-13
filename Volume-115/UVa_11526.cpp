//UVa Problem-11526(H(n))
//Accepted
//Running time: 0.264 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<1){
            cout<<"0\n";
            continue;
            }
        long long len=(long long)sqrt(n);
        long long last,prev=n,sum=0;
        for(int i=1;i<=len;i++){
            last=n/i;
            sum+=last;
            sum+=(prev-last)*(i-1);
            prev=last;
            }
        if(prev>len){
            sum+=len;
            }
        cout<<sum<<endl;
        }
    return 0;
    }
