//UVa Problem-591(Box of Bricks)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    int x=0,c=0;
    while(cin>>x){
        if(x==0) break;
        int h[100],sum=0;
        for(int i=0;i<x;i++){
            cin>>h[i];
            sum+=h[i];
            }
        if(sum%x==0){
            int div=sum/x;
            int hh=0,f=0;
            for(int i=0;i<x;i++){
                if(h[i]>=div){
                    hh+=h[i];
                    f++;
                    }
                }
            c++;
            int ans=hh-f*div;
            cout<<"Set #"<<c<<"\nThe minimum number of moves is "<<ans<<'.'<<"\n\n";
            }
        }
    return 0;
    }
