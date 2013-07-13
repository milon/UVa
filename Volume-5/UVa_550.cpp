//UVa Problem-550(Multiplying by Rotation)
//Accepted
//Running time: 0.040 sec
//Author: Milon

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    while(true){
        int ans=0;
        int b,a0,x;
        cin>>b>>a0>>x;
        if(cin.eof())
            break;
        if(a0==0 || x==1){
            cout<<1<<endl;
            continue;
            }
        int now=1;
        int s=b*x-1;
        for(int i=2;i;++i){
            now*=b;
            now%=s;
            if(((a0%s)*(now+(s-1)%s))%s==0){
                ans=i-1;
                break;
                }
            }
        cout<<ans<<endl;
        }
    return 0;
    }
