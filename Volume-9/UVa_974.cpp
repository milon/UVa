//UVa Problem-974(Kaprekar Numbers)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
#include<cstring>
using namespace std;

int Kap[]={9,45,55,99,297,703,999,2223,2728,4879,4950,5050,5292,7272,7777,9999,17344,22222,38962};

void Cal(int n,int m){
    int i,res=0;
    for(i=0;i<19;i++){
        if(Kap[i]>=n && Kap[i]<=m){
            printf("%d\n",Kap[i]);
            res++;
            }
        }
    if(!res){
        printf("no kaprekar numbers\n");
        }
    }

int main(){
    int kase,n,m,i=0;
    scanf("%d",&kase);
    while(kase--){
        if(i++)
            printf("\n");
        printf("case #%d\n",i);
        scanf("%d%d",&n,&m);
        Cal(n,m);
        }
    return 0;
    }
