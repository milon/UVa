//UVa Problem-10624(Super Number)
//Accepted
//Running time: 2.908 sec

#include<iostream>
using namespace std;

bool suru=true;
int output[2000];

bool divide(int now,int div){
    int rem=0;
    for(int i=0;i<now;i++){
        rem=rem*10+output[i];
        rem%=div;
        }
    return (rem==0);
    }

bool solve(int now,int n,int m){
    if(now==m){
        for(int i=0;i<now;i++)
            cout<<output[i];
        cout<<endl;
        return true;
        }
    for(int i=0;i<10;i++){
        output[now]=i;
        if((now<n || divide(now+1,now+1)) && solve(now+1,n,m))
            return true;
        }
    return false;
    }

int main(){
    int test,index=0;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        cout<<"Case "<<++index<<": ";
        suru=false;
        n--;
        for(int i=1;i<10;i++){
            output[0]=i;
            if(solve(1,n,m)){
                suru=true;
                break;
                }
            }
        if(!suru)
            cout<<"-1"<<endl;
        }
    return 0;
    }
