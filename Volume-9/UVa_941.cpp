//Uva Problem-941(Permutation)
//Accepted
//Running time: 0.316 sec

#include<iostream>
#include<string>
using namespace std;

#define max 22

char line[max];
long long per[max];

int compare(const void *a, const void *b){
    return *(char*)a- *(char*)b;
    }

void swap(char *x,char *y){
    char suru;
    suru=*x;
    *x=*y;
    *y=suru;
    }

void permute(char *line,long long target,int len){
    qsort(line,len,sizeof(char),compare);
    long long d,i;
    if(target==0)
        return;
    for(d=0,i=0;i<=len && per[len-1]*i<=target;i++){
        d=per[len-1]*i;
        }
    swap(line,line+i-1);
    permute(line+1,target-d,len-1);
    }

int main(){
    int c,kase,len;
    long long n,i;
    for(per[0]=1,i=1;i<max;i++)
        per[i]=per[i-1]*i;
    cin>>kase;
    while(kase--){
        cin>>line>>n;
        len=strlen(line);
        permute(line,n,len);
        cout<<line<<endl;
        }
    return 0;
    }
