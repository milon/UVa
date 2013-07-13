//UVa Prblem-11699(Rooks)
//Accepted
//Running time: 1.424 sec

#include<iostream>
using namespace std;

const int N = 15;

bool suru[N][N];
string m[N];

int solve(){
    int ret=15;
    for(int k=0;k<(1<<15);k++){
        for(int i=0;i<15;i++)
            for(int j=0;j<15;j++)
                suru[i][j]=(m[i][j]=='#');
        for(int i=0;i<15;i++){
            if((k&(1<<i))!=0){
                for(int j=0;j<15;j++)
                    suru[i][j]=false;
                }
            }
        int tmp2=0;
        int tmp1=__builtin_popcount(k);
        for(int j=0;j<15;j++){
            bool haveans=0;
            for(int i=0;i<15;i++){
                if(suru[i][j]==true)
                    haveans=true;
                }
            if(haveans)
                tmp2++;
            }
        ret=min(ret,max(tmp1,tmp2));
        }
    return ret;
    }

int main(){
    while(true){
        bool isend=false;
        for(int i=0;i<15;i++){
            cin>>m[i];
            if(m[i]=="END")
                return 0;
            }
        cout<<solve()<<endl;
        }
    return 0;
    }
