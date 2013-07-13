//UVa Problem-10003(Cutting Sticks)
//Accepted
//Running time: 0.188 sec

#include<iostream>
#include<algorithm>
using namespace std;

#define max 55
#define inf 1<<29

int a[max],c[max][max];

int main(){
    int l,n,d;
    while(cin>>l && l){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        a[0]=0;
        a[n+1]=l;
        for(int i=0;i<=n;i++)
            c[i][i+1]=0;
        for(int i=1;i<=n+1;i++){
            for(int j=i-2;j>=0;j--){
                d=inf;
                for(int k=j+1;k<i;k++)
                    d=min(d, c[j][k]+c[k][i]);
                c[j][i]=d+a[i]-a[j];
                }
            }
        printf("The minimum cutting is %d.\n", c[0][n+1]);
        }
    return 0;
    }
