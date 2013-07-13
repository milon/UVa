//UVa Problem-10177((2/3/4)-D Sqr/Rects/Cubes/Boxes?)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

typedef long long ll;

long long sump(long long n,int p){
    long long ret=0;
    for(int i=1;i<=n;i++){
        long long tmp=1;
        for(int j=0;j<p;j++)
            tmp*=i;
        ret+=tmp;
        }
    return ret;
    }

int main(){
    long long n=0;
    while(cin>>n){
        long long op[6];
        long long tmp=sump(n,1);
        op[0]=sump(n,2);
        op[1]=tmp*tmp-op[0];
        op[2]=sump(n,3);
        op[3]=tmp*tmp*tmp-op[2];
        op[4]=sump(n,4);
        op[5]=tmp*tmp*tmp*tmp-op[4];
        for(int i=0;i<6;i++){
            if(i)
                cout<<" ";
            cout<<op[i];
            }
        cout<<endl;
        }
    return 0;
    }
