//UVa Problem-11875(Brick Game)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
    int test,cs=0;
    scanf("%d",&test);
    while(test--){
        int i,n,a[13]={0};
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        n=i/2;
        printf("Case %d: %d\n",++cs,a[n]);
        }
    return 0;
    }
