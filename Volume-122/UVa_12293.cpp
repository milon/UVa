//UVa Problem-12293(Box Game)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
    long long n;
    while(scanf("%lld",&n) && n){
        long long num=1;
        while(num<n){
            num*=2;
            num++;
            }
        if(num==n)
            printf("Bob\n");
        else
            printf("Alice\n");
        }
    return 0;
    }
