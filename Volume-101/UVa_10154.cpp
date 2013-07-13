//Uva Problem-10154(Weights and Measures)
//Accepted
//Running time: 0.356 sec

#include<iostream>
#include<algorithm>
using namespace std;

#define max 6000
#define inf 1<<29

struct turtle{
    int wt,st;
    }t[max];

int a[max][max];

bool compare(turtle a, turtle b){
    return a.st<b.st;
    }

int main(){
    int n=1,ans=1;
    while(cin>>t[n].wt>>t[n].st){
        t[n].st-=t[n].wt;
        n++;
        }
    n--;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            a[i][j]=inf;
            }
        }
    for(int i=0;i<=n;i++)
        a[i][0]=0;
    sort(t+1,t+n+1,compare);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            a[i][j]=a[i-1][j];
            if(a[i-1][j-1]<t[i].st)
                a[i][j]=min(a[i][j],a[i-1][j-1]+t[i].wt);
            }
        }
    for(int i=n;i>0;i--){
        if(a[n][i]<inf){
            ans=i;
            break;
            }
        }
    cout<<ans<<endl;
    return 0;
    }
