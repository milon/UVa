//UVa Problem-10131(Is Bigger Smarter?)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

typedef struct{
    long id,weight,iq;
    }type;

const long maxn=1007;
long n,ans,pos,d[maxn],f[maxn],tmp[maxn];
type suru[maxn];

void quick_sort(long begin,long end){
    long i=begin,j=end,mid1=suru[(begin+end)/2].weight,mid2=suru[(begin+end)/2].iq;
    type t;
    do{
        while(suru[i].weight<mid1 || (suru[i].weight==mid1 && suru[i].iq>mid2))
            i++;
        while(suru[j].weight>mid1 || (suru[j].weight==mid1 && suru[j].iq<mid2))
            j--;
        if(i<=j){
            t=suru[i];
            suru[i]=suru[j];
            suru[j]=t;
            i++;
            j--;
            }
        }while(i<=j);
    if(i<end)
        quick_sort(i,end);
    if(j>begin)
        quick_sort(begin,j);
    }

int main(){
    n=0;
    while(scanf("%ld%ld",&suru[n+1].weight,&suru[n+1].iq)==2){
        n++;
        suru[n].id=n;
        }
    quick_sort(1,n);
    for(long i=1;i<=n;i++){
        d[i]=1;
        f[i]=0;
        }
    for(long i=1;i<=n;i++)
        for(long j=1;j<i;j++)
            if(suru[i].weight>suru[j].weight && suru[i].iq<suru[j].iq && d[i]<d[j]+1){
                d[i]=d[j]+1;
                f[i]=j;
                }
    ans=0;
    pos=0;
    for(long i=1;i<=n;i++)
        if(d[i]>ans){
            ans=d[i];
            pos=i;
            }
    tmp[1]=suru[pos].id;
    for(long i=2;i<=ans;i++,pos=f[pos])
        tmp[i]=suru[f[pos]].id;
    printf("%ld\n",ans);
    for(long i=ans;i>=1;i--)
        printf("%ld\n",tmp[i]);
    return 0;
    }
