//UVa Problem-11743(Credit Check)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
    char a[5],b[5],c[5],d[5];
    int n,sum1,sum2,sumtotal;
    while(scanf("%d\n",&n)==1){
        for(int count=1;count<=n;count++){
            scanf("%s %s %s %s",&a,&b,&c,&d);
            sum1=sum2=sumtotal=0;
            sum1+=((a[0]-48)*2)/10+((a[0]-48)*2)%10+((a[2]-48)*2)/10+((a[2]-48)*2)%10;
            sum1+=((b[0]-48)*2)/10+((b[0]-48)*2)%10+((b[2]-48)*2)/10+((b[2]-48)*2)%10;
            sum1+=((c[0]-48)*2)/10+((c[0]-48)*2)%10+((c[2]-48)*2)/10+((c[2]-48)*2)%10;
            sum1+=((d[0]-48)*2)/10+((d[0]-48)*2)%10+((d[2]-48)*2)/10+((d[2]-48)*2)%10;
            sum2=a[1]-48+a[3]-48+b[1]-48+b[3]-48+c[1]-48+c[3]-48+d[1]-48+d[3]-48;
            sumtotal=sum1+sum2;
            if(sumtotal%10==0)
                printf("Valid\n");
            else
                printf("Invalid\n");
            }
        }
    return 0;
    }
