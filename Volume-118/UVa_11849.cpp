//UVa Problem-11849(CD)
//Accepted
//Running time: 0.808 sec

#include<cstdio>
using namespace std;

int main(){
    unsigned long i,j,n,m,mar,a[1000001],b;
    while((scanf("%lu %lu",&n,&m))!=EOF){
        if(n==0&&m==0)
            break;
        for(i=0;i<n;i++)
            scanf("%lu",&a[i]);
        for(i=1,mar=0;i<n;i++){
            if(a[i]==a[i-1])
                mar++;
            }
        i=0;
        for(j=0;j<m;j++){
            scanf("%lu",&b);
            for(;a[i]<=b&&i<n;i++){
                if(a[i]==b)
                mar++;
                }
            }
        printf("%lu\n",mar);
        }
    return 0;
    }
