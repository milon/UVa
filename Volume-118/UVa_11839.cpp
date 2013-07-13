//UVa Problem-11839(Optical Reader)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    char ch[]={"ABCDE"};
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        int i,j,pos=0,ct=0,test;
        for(j=0;j<n;j++){
            for(i=0;i<5;i++){
                scanf("%d",&test);
                if(test<=127){
                    pos=i;
                    ct++;
                    }
                }
            if(ct==1)
                printf("%c\n",ch[pos]);
            else
                printf("*\n");
            ct=0;
            }
        }
    return 0;
    }
