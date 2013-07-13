//UVa Problem-10474(Where is the Marble?)
//Accepted
//Running time: 0.572 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,q,kase=0;
    while(cin>>n>>q && n && q){
        int a[10000+10];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<"CASE# "<<++kase<<":"<<endl;
        int query;
        bool found;
        for(int i=0;i<q;i++){
            cin>>query;
            found=false;
            for(int j=0;j<n;j++){
                if(a[j]==query){
                    cout<<query<<" found at "<<j+1<<endl;
                    found=true;
                    break;
                    }
                else if(a[j]>query)
                    break;
                }
            if(!found){
                cout<<query<<" not found"<<endl;
                }
            }
        }
    return 0;
    }
