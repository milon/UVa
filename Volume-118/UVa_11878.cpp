//UVa Problem-11878(Homework Checker)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
    char input[100];
    int count=0;
    while(gets(input)){
        int a,b,c;
        char dummy[100];
        strcpy(dummy,input);
        char *s;
        s=strtok(input,"+-=");
        a=atoi(s);
        s=strtok(NULL,"+-=");
        b=atoi(s);
        s=strtok(NULL,"+-=");
        if(strcmp(s,"?")==0)
            continue;
        c=atoi(s);
        int correct;
        if(strchr(dummy,'+'))
            correct=a+b;
        else
            correct=a-b;
        if(correct==c)
            count++;
        }
    cout<<count<<endl;
    return 0;
    }
