//UVa Problem-482(Permutation Arrays)
//Accepted
//Running time: 0.028 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct array{
    int input;
    string num;
    }suru[1000000];

bool cmp(array x,array y){
    if(x.input<y.input)
        return true;
    return false;
    }

int main(){
    int test;
    cin>>test;
    getchar();
    bool blank=false;
    while(test--){
        char in[1000000];
        gets(in);
        gets(in);
        char *token=strtok(in," ");
        int index=0;
        while(token!=NULL){
            suru[index].input=atoi(token);
            token=strtok(in," ");
            index++;
            }
        gets(in);
        token=strtok(in," ");
        index=0;
        while(token!=NULL){
            suru[index].input=atoi(token);
            token=strtok(in," ");
            index++;
            }
        sort(suru,suru+index,cmp);
        if(blank)
            cout<<endl;
        blank=true;
        for(int i=0;i<index;i++)
            cout<<suru[i].num<<endl;
        }
    return 0;
    }
