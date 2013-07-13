//UVa Problem-516(Prime Land)
//Accepted
//Running time: 0.040 sec
//Author: Milon

#include<cstdio>
#include<cmath>
using namespace std;

#define ERROR 0.00000001

int main(){
    int p,e;
    while((scanf("%d",&p)!=EOF) && p!=0){
        scanf("%d",&e);
        int product=1;
        product*=(int)(pow((double)p,(double)e)+ERROR);
        while(getchar()==' '){
            scanf("%d",&p);
            scanf("%d",&e);
            product*=(int)(pow((double)p, (double)e)+ERROR);
            }
        product-=1;
        int output[50000]={0};
        int i;
        int sqrt_num=(int)sqrt((double)product);
        int max_prime=0;
        for(i=2;i<=sqrt_num;i++){
            while(!(product%i)){
                product/=i;
                output[i]++;
                max_prime=(max_prime<i)?i:max_prime;
                }
            }
        int print=0;
        if(product>1){
            print=1;
            printf("%d %d",product,1);
            }
        for( ;max_prime>=2;max_prime--){
            if(output[max_prime]){
                if(print)
                    printf(" ");
                print=1;
                printf("%d %d",max_prime,output[max_prime]);
                }
            }
        printf("\n");
        }
    return 0;
    }
