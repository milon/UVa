//UVa Problem-12403(Save Setu)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    char input[100];
    int inputAmount,totalAmount=0;
    while(test--){
        scanf("%s",input);
        if(strcmp(input,"donate")==0){
            scanf("%d",&inputAmount);
            totalAmount+=inputAmount;
            }
        else{
            printf("%d\n",totalAmount);
            }
        }
    return 0;
    }
