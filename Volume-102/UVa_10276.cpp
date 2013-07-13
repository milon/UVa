//UVa problem-10276(Hanoi Tower Troubles Again!)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cmath>
using namespace std;

int x[60],n,index;

int call(int i){
    if(index==n)
        return 0;
    if(x[index]==0){
        x[index]=i;
        return 1;
        }
    int sum=x[index]+i;
    double sqt=sqrt(sum);
    sum=(int)sqt;
    if(sqt!=sum){
        index++;
        call(i);
        }
    else{
        x[index]=i;
        return 1;
        }
    }

int main(){
    int i,test;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        for(i=0;i<60;i++)
            x[i]=0;
        i=1;
        index=0;
        while(call(i)){
            index=0;
            i++;
            }
        printf("%d\n",--i);
        }
    return 0;
    }
