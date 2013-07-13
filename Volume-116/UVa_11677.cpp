//UVa Problem-11677(Alarm Clock)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int main(){
    int h[2],m[2];
    while(cin>>h[0]>>m[0]>>h[1]>>m[1]){
        if(h[0]==0 && h[1]==0 && m[0]==0 && m[1]==0)
            break;
        int t[2],res=0;
        for(int i=0;i<2;i++)
            t[i]=h[i]*60*60+m[i]*60;
        if(t[0]>t[1])
            t[1]+=60*60*24;
        res=t[1]-t[0];
        cout<<res/60<<endl;
        }
    return 0;
    }
