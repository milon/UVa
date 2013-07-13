//UVa Problem-10878(Decode the tape)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<string>
using namespace std;

#define max 20

const int exp[]={0, 128, 64, 32, 16, 8, 0, 4, 2, 1};

int main(){
    //freopen("in.txt","r",stdin);
    char data[max];
    while(gets(data)){
        int sum=0;
        int len=strlen(data);
        if(data[0]!='|')
            continue;
        for(int i=1;i<len-1;i++){
            if(data[i]=='.')
                continue;
            if(data[i]=='o')
                sum+=exp[i];
            }
        printf("%c",sum);
        }
    return 0;
    }
