//UVa Problem-10271(Chopsticks)
//Accepted
//Running time: 0.308 sec

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define max 5005

int l[max],w[max],a[max][1010];

bool compare(int a,int b){
    return a>b;
    }

int main(){
    int test,k,n;
    cin>>test;
    while(test--){
        cin>>k>>n;
        k+=8;
        for(int i=1;i<=n;i++)
            cin>>l[i];
        sort(l+1,l+n+1,compare);
        for(int i=2;i<=n;i++)
            w[i]=(l[i]-l[i-1])*(l[i]-l[i-1]);
        memset(a,127,sizeof(a));
        for(int i=0;i<=n;i++)
            a[i][0]=0;
        for(int i=3;i<=n;i++){
            for(int j=1;j<=k && 3*j<=i;j++){
                a[i][j]=min(a[i-1][j],a[i-2][j-1]+w[i]);
                }
            }
        cout<<a[n][k]<<endl;
        }
    return 0;
    }
