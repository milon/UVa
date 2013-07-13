//UVa Problem-11858(Frosh Week)
//Accepted
//Running time: 1.084 sec

#include<iostream>
using namespace std;

const int N = 1000010;
const long long inf = (1LL<<60);

long long in[N];
long long L[N],R[N];
long long cnt;

void merge(long long a[],int l,int mid,int r){
    int n1=mid-l+1,n2=r-mid;
    for(int i=0;i<n1;i++){
        L[i]=a[l+i];
        }
    for(int i=0;i<n2;i++){
        R[i]=a[mid+i+1];
        }
    L[n1]=R[n2]=inf;
    int pr=0,pl=0;
    for(int i=l;i<r+1;i++){
        if(L[pl] <= R[pr]){
            a[i]=L[pl++];
            }
        else if(L[pl] > R[pr]){
            cnt+=n1-pl;
            a[i]=R[pr++];
            }
        }
    }

void mergesort(long long a[],int l,int r){
    if(l < r){
        int q =(r+l)/2;
        mergesort(a,l,q);
        mergesort(a,q+1,r);
        merge(a,l,q,r);
        }
    }

int main(){
    int n;
    while(scanf("%d",&n) != -1){
        for(int i=0;i<n;i++)
            scanf("%lld",&in[i]);
        cnt=0;
        mergesort(in,0,n-1);
        cout << cnt<< endl;
        }
    return 0;
    }
