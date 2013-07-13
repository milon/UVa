//UVa Problem-10089(Repackaging)
//Accepted
//Running time: 0.060 sec

#include<iostream>
using namespace std;

const long long maxn=1001;

bool repackage(long long pkgs[][3],long long npkgs){
    for(long long i=0;i<npkgs;++i){
        pkgs[i][0]-=pkgs[i][2];
        pkgs[i][1]-=pkgs[i][2];
        }
    long long x1=pkgs[0][0],y1=pkgs[0][1],x2=pkgs[0][0],y2=pkgs[0][1];
    for(long long i=1;i<npkgs;++i){
        long long x=pkgs[i][0],y=pkgs[i][1];
        long long a1=y1*x,b1=x1*y,a2=y2*x,b2=x2*y;
        if (a1==b1)
            if(x1*x+y1*y<=0)
                return true;
            else
                continue;
        if(a2==b2)
            if(x2*x+y2*y<=0)
                return true;
            else
                continue;
        if(a1<b1){
            x1=x;
            y1=y;
            }
        if(a2>b2){
            x2=x;
            y2=y;
            }
        if(x1==x2 && y1==y2)
            return true;
        if(y1*x2==y2*x1)
            if(x1*x2+y1*y2<=0)
                return true;
            else
                continue;
        if(y1*x2<y2*x1)
            return true;
        }
    return false;
    }

int main(){
    long long pkgs[maxn][3];
    for(long long npkgs;cin>>npkgs && npkgs!=0;){
        for(long long i=0;i<npkgs;++i)
            cin>>pkgs[i][0]>>pkgs[i][1]>>pkgs[i][2];
        if(repackage(pkgs,npkgs))
            cout<<"Yes\n";
        else
            cout<<"No\n";
        }
    return 0;
    }
