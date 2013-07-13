//UVa Problem-897(Anagrammatic Prime)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;

/*
#define MAXN 10000000

char    sv[MAXN+2];
char    F[MAXN+2];
int     Per[4000],dg;
int     dummy[5400],dum;
char    isana,per;


bool isOk(int n) {
    int i;
    dg = 0;
    while(n) {
        i = n%10;
        if(i%2 == 0 || i%5 ==0)
            return false;
        n /= 10;
        dg++;
        }
    return true;
    }

int com(const void *a, const void *b) {
    return *(char*)a - *(char*)b;
    }

void prime_Table() {
    int i, j;
    for(i = 2; i*i< MAXN; ) {
        for(j = i+i; j<MAXN; j+= i)
            sv[j] = 1;
        for(i++; sv[i]; i++);
        }
    }

void Cheack(char tt[], char yy[]) {
    int i,  k = 1, d, num = 0, p;
    for(i = dg-1; i>=0; i--) {
        p = tt[i] - '0';
        d = yy[p] - '0';
        num += d*k;
        k *= 10;
        }
    if(F[num] == 0)
        dummy[dum++] = num;
    if(sv[num]) isana = 0;
    }

int Com(int n) {
    char tt[100], yy[100];
    int i;
    for(i = 0; i<dg; i++)
        tt[i] = i+'0';
    tt[i] = NULL;
    sprintf(yy,"%d",n);
    isana = 1;
    dum = 0;
    do{
        Cheack(tt,yy);
        }while(next_permutation(tt,tt+strlen(tt)));
    if(isana)
        return 1;
    return 0;
    }

void Mark(int k) {
    int i, d;
    for(i = 0; i<dum; i++) {
        d = dummy[i];
        F[d] = k;
        }
    }

void Gen() {
    int i;
    per = 0;
    for(i = 2; i<10; i++) {
        if(sv[i] == 0)
        Per[per++] = i;
        }
    for(i = 11; i<MAXN; i+= 2) {
        if(sv[i])
            continue;
        if(F[i] == 2){
            Per[per++] = i;
            continue;
            }
        if(F[i] == 1)
            continue;
        if(isOk(i)) {
            if(Com(i)){
                Mark(2);
                Per[per++] = i;
                }
            else Mark(1);
            }
        }
    printf("%d",per);
    }
*/

int A[]={2,3,5,7,11,13,17,31,37,71,73,79,97,113,131,199,311,337,373,733,919,991};

void Cal(int n) {
    int i,j=1;
    if(n>= A[21]){
        printf("0\n");
        return;
        }
    while(j<= n)
        j*=10;
    for(i=0;i<22 && A[i]<j;i++){
        if(A[i]>n){
            printf("%d\n",A[i]);
            return;
            }
        }
    printf("0\n");
    }

int main(){
    int n;
    while(scanf("%d",&n)==1){
        if(!n)
            break;
        Cal(n);
        }
    return 0;
    }
