//UVa Problem-11515(Cranes)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

struct crane{
    int x,y,r;
    }suru[15+3];

int n;

int pow2(int x){
    return x*x;
    }

bool is_conflict(int p){
    for(int i=0;i<n;i++){
        if((1<<i)&p){
            for(int j=i+1;j<n;j++){
                if((1<<j)&p){
                    int dist=pow2(suru[i].x-suru[j].x)+pow2(suru[i].y-suru[j].y);
                    if(dist<=pow2(suru[i].r+suru[j].r))
                        return true;
                    }
                }
            }
        }
    return false;
    }

int calc(int p){
    int ret=0;
    for(int i=0;i<n;i++){
        if((1<<i)&p)
            ret+=pow2(suru[i].r);
        }
    return ret;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>suru[i].x>>suru[i].y>>suru[i].r;
        int maximum=-1;
        for(int i=1;i<(1<<n);i++){
            if(!is_conflict(i))
                maximum=max(maximum,calc(i));
            }
        cout<<maximum<<endl;
        }
    return 0;
    }
