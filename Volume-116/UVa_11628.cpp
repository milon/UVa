//UVa Problem-11628(Another lottery)
//Accepted
//Running time: 0.800 sec

#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
    }

int main(){
    int n,m;
    while(cin>>n>>m && n && m){
        int total=0,suru[n],t;
        for(int i=0;i<n;i++){
            for(int j=0;j<m-1;j++){
                cin>>t;
                }
            cin>>suru[i];
            total+=suru[i];
            }
        for(int i=0;i<n;i++){
            int milon=gcd(total,suru[i]);
            cout<<suru[i]/milon<<" / "<<total/milon<<endl;
            }
        }
    return 0;
    }
