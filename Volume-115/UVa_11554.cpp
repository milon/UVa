//UVa Problem-11554(HAPLESS HEDONISM)
//Accepted
//Running time: 1.636 sec

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        unsigned long long ans=0;
        for(int i=1;i<=n;i++){
            double p=n-(i+i+1);
            if(p>0)
                ans+=(unsigned long long)(p*(p+1))/2;
            }
        cout<<ans<<endl;
        }
    return 0;
    }
