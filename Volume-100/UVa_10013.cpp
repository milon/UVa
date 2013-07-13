//UVa Problem-10013(Super Long Sum)
//Accepted
//Running time: 0.860 sec

#include<cstdio>
using namespace std;

#define s 1000001

char a[s],b[s];

int main(){
    long n,m,i,add,k;
    scanf("%ld",&n);
    for(k=1;k<=n;k++){
        scanf("%ld",&m);
        for(i=1;i<=m;i++)
            scanf("%ld %ld",&a[i],&b[i]);
        add=0;
        for(i=m;i>=1;i--){
            add=a[i]+b[i]+add;
            a[i]=add%10;
            add/=10;
            }
        if(add!=0)
            printf("%ld",add);
        for(i=1;i<=m;i++)
            printf("%ld",a[i]);
        if(k!=n)
            printf("\n\n");
        else
            printf("\n");
        }
    return 0;
    }
