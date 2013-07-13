//UVa Problem-725(Divison)
//Accepted
//Running time: 0.200 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

bool avail[12],printed;
char a[10*9*8*7*6*100][8],temp[8];
int length;

void generate_all(int n){
    if(n==5){
        temp[5]=0;
        strcpy(a[length],temp);
        length++;
        return;
        }
    for(int i=0;i<=9;i++){
        if(avail[i]){
            avail[i]=false;
            temp[n]=i+'0';
            generate_all(n+1);
            avail[i]=true;
            }
        }
    }

void check_print(char *p,int b,int n){
    bool available[10+2];
    memset(available,false,sizeof(available));
    char pch [10];
    sprintf(pch,"%d",b);
    for(int i=0;i<5;i++){
        available[p[i]-'0']=true;
        available[pch[i]-'0']=true;
        }
    for( int i=0;i<10;i++){
        if(!available[i])
            return;
        }
    printed=true;
    printf("%s / %s = %d\n",pch,p,n);
    }

int main (){
    memset(avail,true,sizeof(avail));
    length=0;
    generate_all(0);
    int n;
    bool blank=false;
    while(cin>>n && n){
        printed=false;
        if(blank)
            printf("\n");
        blank=true;
        for(int i=0;i<30240;i++){
            int num=atoi(a[i]);
            if(num*n<100000)
                check_print(a[i],num*n,n);
            }
        if(!printed)
            cout<<"There are no solutions for "<<n<<"."<<endl;
        }
    return 0;
    }
