//UVa Problem-11298(Dissecting a Hexagon)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        if((n>2) && (n%3==0))
            printf("1\n");
        else
            printf("0\n");
        }
    return 0;
    }
