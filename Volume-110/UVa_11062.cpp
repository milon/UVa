//UVa Prblem-11062(Andy's Second Dictionary)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstring>
#include<set>
#include<cstdio>
using namespace std;

set<string>suru;
char ss[100000];
char W[503][1000];
int ind;

void Parse(){
    int i,j;
    char *p,xx[1000];
    for(i=0;ss[i];i++){
        ss[i]=tolower(ss[i]);
        if(!isalpha(ss[i]) && ss[i]!='-')
            ss[i]=' ';
        }
    p=strtok(ss," ");
    while(p){
        strcpy(W[ind++],p);
        p=strtok(NULL," ");
        }
    }

void Cal(){
    int p=1,l;
    char xx[1000];
    strcpy(xx,W[0]);
    while(p<ind){
        l=strlen(W[p-1]);
        if(W[p-1][l-1] == '-') {
            l=strlen(xx);
            xx[l-1]=NULL;
            strcat(xx,W[p]);
            }
        else{
            suru.insert(xx);
            strcpy(xx,W[p]);
            }
        p++;
        }
    suru.insert(xx);
    set<string>::iterator d;
    for(d=suru.begin();d!=suru.end();d++){
        cout<<*d<<endl;
        }
    }

int main(){
    ind=0;
    while(gets(ss)) {
        Parse();
        }
    Cal();
    return 0;
    }
