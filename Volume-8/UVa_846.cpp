//UVa Problem-846(Steps)
//Accepted
//Running time: 0.056 sec

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long a,b,diff,pre,now;
        cin>>a>>b;
        diff=abs(b-a);
        pre=0;
        now=0;
        if(diff==0)
            cout<<0<<endl;
        else{
            for(int j=2; ;j++){
                if(j%2==0)
                    now=(1+j/2)*(j/2);
                else
                    now=(1+j/2)*(j/2)+j/2+1;
                if(diff>pre && diff<=now){
                    cout<<j<<endl;
                    break;
                    }
                pre=now;
                }
            }
        }
    return 0;
    }
