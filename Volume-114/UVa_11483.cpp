//UVa Problem-11483(Code Creater)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

#define N 101

int main(){
    int case_counter=1,i,j,n;
    char str[N];
    while(true){
        scanf("%d\n",&n);
        if(n==0)
            break;
        printf("Case %d:\n",case_counter++);
        puts("#include<string.h>\n#include<stdio.h>\nint main()\n{");
        for(i=0;i<n;i++){
            gets(str);
            fputs("printf(\"",stdout);
            for(j=0;str[j];j++){
                if(str[j]=='\'' || str[j]=='\"' ||str[j]=='\\')
                    fputc('\\',stdout);
                fputc(str[j],stdout);
                }
            puts("\\n\");");
            }
        puts("printf(\"\\n\");\nreturn 0;\n}");
        }
    return 0;
    }


