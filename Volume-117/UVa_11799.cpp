//UVa Problem-11799(Horror Dash)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        int n,ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            ans=max(ans,temp);
            }
        cout<<"Case "<<++kase<<": "<<ans<<endl;
        }
    return 0;
    }
