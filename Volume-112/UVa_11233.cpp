//UVa Problem-11233(Deli Deli)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

typedef struct ir {
    char word[100], rep[100];
} irr;

irr words[25]={0,0};

int check(char ch[]){
    if(ch[1]=='o' || ch[1]=='s' || ch[1]=='x')
        return 1;
    if(!strcmp(ch,"ch") || !strcmp(ch,"sh"))
        return 1;
    return 0;
    }

int main(){
    int l,n,k,len,found;
    char ch[3],input[25];
    cin>>l>>n;
    for(int i=0;i<l;i++){
        scanf("%s %s",words[i].word, words[i].rep);
        }
    for(int i=0;i<n;i++){
        scanf("%s",input);
        found=0;
        for(int j=0;j<l;j++){
            if(!strcmp(input,words[j].word)) {
                printf("%s\n",words[j].rep);
                found=1;
                }
            }
        if(!found){
            len=strlen(input);
            ch[0]=input[len-2];
            ch[1]=input[len-1];
            ch[2]='\0';
            if(ch[0]!='a' && ch[0]!='e' && ch[0]!='i' && ch[0]!='o' && ch[0]!='u' && ch[1]=='y'){
                for(int k=0;k<len-1;k++){
                    putchar(input[k]);
                    }
                printf("ies\n");
                }
            else if(check(ch)){
                printf("%ses\n",input);
                }
            else{
                printf("%ss\n",input);
                }
            }
        }
    return 0;
    }
