//UVa Problem-11608(No Problem)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int main(){
    int n,suru[2][12]={0},kase=0,x,y;
    while(cin>>n && n>=0){
        cout<<"Case "<<++kase<<":"<<endl;
        for(y=0;y<2;y++)
            for(x=1;x<13;x++)
                cin>>suru[y][x];
        for(x=1;x<13;x++){
            n += suru[0][x-1];
            if(suru[1][x] > n)
                cout<<"No problem. :("<<endl;
            else{
                n -= suru[1][x];
                cout<<"No problem! :D"<<endl;
                }
            }
        }
    return 0;
    }
