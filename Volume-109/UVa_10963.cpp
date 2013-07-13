//UVa Problem-10963(The Swallowing Ground)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        cin>>a>>b;
        int temp=a-b;
        bool suru=false;
        for(int i=1;i<n;i++){
            cin>>a>>b;
            if(suru)
                continue;
            if(temp!=a-b)
                suru=true;
            }
        if(suru)
            puts("no");
        else
            puts("yes");
        if(t) puts("");
        }
    return 0;
    }
