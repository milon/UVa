//UVa Problem-11149(Power of Matrix)
//Accepted
//Running time: 0.264 sec

#include<iostream>
using namespace std;

const long long N = 80;

long long suru[N][N];

void matmul(long long mat[N][N],long long mat2[N][N],long long n){
    static long long tmp[N][N],tmp2[N][N];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            tmp[i][j]=mat[i][j];
            tmp2[i][j]=mat2[i][j];
            }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=0;
            for(int k=0;k<n;k++){
                mat[i][j]+=tmp[i][k]*tmp2[k][j];
                mat[i][j]%=10;
                }
            }
        }
    }

void pow(long long mat[N][N],long long n,long long p){
    if(p==1)return;
    pow(mat,n,p/2);
    matmul(mat,mat,n);
    if(p%2==1)
        matmul(mat,suru,n);
    return;
    }

int main(){
    long long n,p;
    long long mat[N][N];
    while(cin>>n>>p && n){
        for(int i=0;i<2*n;i++)
            for(int j=0;j<2*n;j++){
                mat[i][j]=0;
                suru[i][j]=0;
                }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
                suru[i][j]=mat[i][j];
                }
            }
        for(long long i=0;i<n;i++){
            mat[i+n][i]=mat[i+n][i+n]=1;
            suru[i+n][i]=suru[i+n][i+n]=1;
            }
        pow(mat,2*n,p+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j)
                    cout<<" ";
                if(i==j)
                    cout<<(mat[i+n][j]+9)%10;
                else
                    cout<<(mat[i+n][j])%10;
                }
            cout<<endl;
            }
        cout<<endl;
        }
    return 0;
    }
