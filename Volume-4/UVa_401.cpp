//UVa Problem-401(Palindromes)
//Accepted
//Running time: 0.012 sec

#include<cstring>
#include<cstdio>
using namespace std;

int plndrm(char ln[]){
    int a=1,i,j,len;
    len=strlen(ln);
    for(i=0,j=len-1;i<len,j>=0;i++,j--){
        if(ln[i]==ln[j])
            continue;
        else{
            a=0;
            break;
            }
        }
    if(a==1)
        return 1;
    else
        return 0;
    }

int mirrorplndrm(char x[]){
    int l,i,c;
    l=strlen(x);
    c=0;
    for(i=0;i<l;i++){
        if(x[i]=='A'||x[i]=='0'||x[i]=='H'||x[i]=='I'||x[i]=='M'||x[i]=='O'||x[i]=='Y'
        ||x[i]=='X'||x[i]=='W'||x[i]=='V'||x[i]=='U'||x[i]=='T'||x[i]=='1'||x[i]=='8')
            c++;
        }
    if(c==l)
        return 1;
    else
        return 0;
    }

int mirrorstr(char x[]){
    int a=1,i,len;
    len=strlen(x);
    for(i=0;i<len;i++){
        if(x[i]=='E')
            x[i]='3';
        else if(x[i]=='J')
            x[i]='L';
        else if(x[i]=='S')
            x[i]='2';
        else if(x[i]=='Z')
            x[i]='5';
        else if(x[i]=='O')
            x[i]='0';
        else
            continue;
        }
    a=plndrm(x);
    if(a==1)
        return 1;
    else
        return 0;
    }

int main(){
    char ln[22];
    int c,len,i,mp,ms;
    while(gets(ln)){
        len=strlen(ln);
        for(i=0;i<len;i++)
            printf("%c",ln[i]);
        c=plndrm(ln);
        if(c==1){
            mp=mirrorplndrm(ln);
            if(mp==1)
                printf(" -- is a mirrored palindrome.\n\n");
            else
                printf(" -- is a regular palindrome.\n\n");
            }
        else{
            ms=mirrorstr(ln);
            if(ms==1)
                printf(" -- is a mirrored string.\n\n");
            else
                printf(" -- is not a palindrome.\n\n");
            }
        }
    return 0;
    }
