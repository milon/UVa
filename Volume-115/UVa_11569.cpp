//UVa Prblem-11569(Lovely Hint)
//Accepted
//Running time: 0.020 sec

#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

string str;
char arr[30];
int ways[30];

void backtrack(int at,int pos){
    if(pos==str.size()){
        ways[at]++;
        return;
        }
    for(int i=pos;i<str.size();i++){
        if(at){
        	int p=(arr[at-1]-'A'+1)*5;
        	int q=(str.at(i)-'A'+1)*4;
            if(p<=q){
                arr[at]=str.at(i);
                backtrack(at+1,i+1);
                }
            }
        else{
            arr[at]=str[i];
            backtrack(at+1,i+1);
            }
        }
    ways[at]++;
    }

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        char input[1000];
        gets(input);
        str="";
        memset(ways,0,sizeof(ways));
        for(int i=0;input[i];i++)
            if(isupper(input[i]))
                str+=input[i];
        sort(str.begin(),str.end());
        string::iterator it=unique(str.begin(),str.end());
        str.resize(it-str.begin());
        if(str.size()==0){
            printf("0 0\n");
            continue;
            }
        backtrack(0,0);
        for(int i=29;i>=0;i--){
            if(ways[i]){
                printf("%d %d\n",i,ways[i]);
                break;
                }
            }
        }
	return 0;
    }

