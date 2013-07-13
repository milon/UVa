//UVa Problem-1225(Digit Counting)
//Accepted
//Running time: 0.012 sec

#include <cstdio>
using namespace std;

int matrix[10001][10];

void calculate(){
    for(int i=0;i<10;i++)
        matrix[0][i]=0;
    for(int i=1;i<=10000;i++){
        for(int j=0;j<10;j++)
            matrix[i][j]=matrix[i-1][j];
        int K=i;
        while(K){
            ++matrix[i][K%10];
            K/=10;
            }
        }
    }

int main(){
    calculate();
    int test;
    scanf("%d",&test);
    while(test--){
        int num;
        scanf("%d",&num);
        for(int i=0;i<10;i++){
            if(i>0)
                printf(" ");
            printf("%d",matrix[num][i]);
            }
        printf("\n");
        }
    return 0;
    }
