//UVa Problem-11278(One-Handed Typist)
//Accepted
//Running time: 0.016 sec

#include <iostream>
using namespace std;

char *ns = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
char *nsr = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
char *s = "~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
char *sr = "~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
char tab[256];

int main(){
    int len1 = strlen(sr), len2 = strlen(nsr);
    char ch;
    for(int i=0;i<len1;i++){
        tab[s[i]] = sr[i];
        }
    for(int i=0;i<len2;i++) {
        tab[ns[i]] = nsr[i];
        }
    while(scanf("%c",&ch)==1){
        if(ch=='\n') putchar('\n');
        else if(ch==' ') putchar(' ');
        else{
            putchar(tab[ch]);
            }
        }
    return 0;
    }
