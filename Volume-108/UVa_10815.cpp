//UVa Problem-10815(Andy's First Dictionary)
//Accepted
//Running time: 0.096 sec

#include<iostream>
#include<cctype>
#include<string>
#include<cstdlib>
using namespace std;

const int maxn=5005,maxl=205;
int total=0;
char word[maxn][maxl],now[maxl];

bool find(){
    for(int i=0;i<total;i++)
        if(!strcmp(now,word[i]))
            return true;
    return false;
    }

int cmp(const void *a,const void *b){
    return strcmp((char*)a,(char*)b);
    }

int main(){
    while(true){
        do{
            *now=getchar();
            }while(!isalpha(*now) && *now!=EOF);
        now[1]=0;
        if(scanf("%[qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM]",now+1)==EOF)
            break;
        for(int i=0;now[i];i++)
            now[i]=tolower(now[i]);
        if(!find())
            memcpy(word[total++],now,sizeof(now));
        }
    qsort(word,total,sizeof(word[0]),cmp);
    for(int i=0;i<total;i++)
        printf("%s\n",word[i]);
    return 0;
    }
