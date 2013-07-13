//UVa Problem-11850(Alaska)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        int a[1422];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        bool possible=true;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>200)
                possible=false;
            if(2*(1422-a[n-1])>200)
                possible=false;
            }
        if(possible==false)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<"POSSIBLE"<<endl;
        }
    return 0;
    }
