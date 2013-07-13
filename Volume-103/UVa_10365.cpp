//UVa Problem-10365(Blocks)
//Accepted
//Running time: 0.164 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long ans=1000*1000*1000;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int k=n/(i*j);
                if(i*j*k!=n)
                    continue;
                ans=min(ans,(long)2*i*j+2*j*k+2*k*i);
                }
            }
        cout<<ans<<endl;
        }
    return 0;
    }
