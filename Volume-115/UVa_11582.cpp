//UVa Problem-11582(Colossal Fibonacci Numbers!)
//Accepted
//Running time: 0.084 sec

#include<cstdio>
using namespace std;

unsigned long long a,b;
int f[10000]={0,1},n;

void solve(){
    int x=0;
    for(int i=2;;i++){
        f[i]=(f[i-1]+f[i-2])%n;
        if(f[i]==1 && f[i-1]==0){
            x=i-1;
            break;
            }
        }
    a%=x;
    int r[100]={1,a},pos=1;
    for(int i=2;i<=64;i++)
        r[i]=(r[i-1]*r[i-1])%x;
    for(int i=1;i<=64;i++){
        if((b&(1llu<<(i-1))) && (b>=(1llu<<(i-1))))
            pos=(pos*r[i])%x;
        }
    printf("%d\n",f[pos%x]);
    }

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%llu %llu %d",&a,&b,&n);
        if(n==1)
            printf("0\n");
        else
            solve();
        }
    return 0;
    }
