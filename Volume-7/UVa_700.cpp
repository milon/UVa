//UVa Problem-700(Date Bugs)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
using namespace std;

void solve(int n,int *a,int *b,int *y){
    int ans=-1;
    int beg=0;
    for(int i=0;i<n;i++)
        beg=max(beg,a[i]);
    for(int i=beg;i<10000;i++){
        bool suru=true;
        for(int j=0;j<n;j++){
            int tmp=(i-a[j])%(b[j]-a[j]);
            if(a[j]+tmp!=y[j]){
                suru=false;
                break;
                }
            }
        if(suru){
            ans=i;
            break;
            }
        }
    if(ans==-1)
        cout<<"Unknown bugs detected."<<endl;
    else
        cout<<"The actual year is "<<ans<<"."<<endl;
    }

int main(){
    int n;
    int tc=1;
    int a[20],b[20],y[20];
    while(cin>>n && n){
        for(int i=0;i<n;i++)
            cin>>y[i]>>a[i]>>b[i];
        cout<<"Case #"<<tc++<<":"<<endl;
        solve(n,a,b,y);
        cout<<endl;
        }
    return 0;
    }

