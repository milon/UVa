//UVa Problem-10300(Ecological Premium)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
    int testcase=0;
    int farmer=0;
    int data[19][3];
    int i,j;
    long long int premium=0;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++){
        premium=0;
        scanf("%d",&farmer);
        for(j=0;j<farmer;j++){
            scanf("%d %d %d",&data[j][0],&data[j][1],&data[j][2]);
            premium+=(long long int)data[j][0]*(long long int)data[j][2];
            }
        printf("%lld\n",premium);
        }
    return 0;
    }
