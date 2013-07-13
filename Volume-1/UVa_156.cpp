//UVa Problem-156(Ananagrams)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

char suru[1005][25];

bool anagram(int x,int y){
    int len_x=strlen(suru[x]);
    int len_y=strlen(suru[y]);
    if(len_x==0 || len_y==0)
        return false;
    if(len_x!=len_y)
        return false;
    int frq[26];
    for(int i=0;i<26;i++)
        frq[i]=0;
    for(int i=0;i<len_x;i++)
        frq[tolower(suru[x][i])-'a']++;
    for(int i=0;i<len_y;i++)
        frq[tolower(suru[y][i])-'a']--;
    for(int i=0;i<26;i++){
        if(frq[i])
            return false;
        }
    return true;
    }

int main(){
    int index=0;
    while(scanf("%s",suru[index])){
        if(strcmp(suru[index],"#")==0)
            break;
        index++;
        }
    bool flag;
    for(int i=0;i<index;i++){
        flag=false;
        for(int j=i+1;j<index;j++){
            if(anagram(i,j)){
                suru[j][0]=0;
                flag=true;
                }
            }
        if(flag)
            suru[i][0]=0;
        }
    // sort
    for(int i=0;i<index;i++){
        for(int j=i+1;j<index;j++){
            if(strcmp(suru[i],suru[j])>0){
                char temp[25];
                strcpy(temp,suru[i]);
                strcpy(suru[i],suru[j]);
                strcpy(suru[j],temp);
                }
            }
        }
    for(int i=0;i<index;i++){
        if(suru[i][0]!=0)
            printf("%s\n",suru[i]);
        }
    return 0;
    }
