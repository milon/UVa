//UVa Problem-651(Deck)
//Accepted
//Running time: 0.024 sec
//Author: Milon

#include<cstdio>
#include<cmath>
using namespace std;

#define EPS pow(10,-9)

int main(){
    double array[100000];
    int n;
    array[0]=0.0;
    array[1]=0.5;
    for(n=2;n<100000;n++)
        array[n]=array[n-1]+0.5/(double)n;
    printf("# Cards Overhang\n");
    while(scanf("%d",&n)==1)
        printf("%5d%10.3f\n",n,EPS+array[n]);
    return 0;
    }


