//UVa Problem-895(Word Problem)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

char a[1000+3][10+3];
int tmp[26];

bool can_make (int p){
	int len=strlen(a[p]);
	bool ret=true;
	for(int i=0;i<len;i++){
		if(tmp[a[p][i]-'a']==0)
            ret=false;
		tmp[a[p][i]-'a']--;
        }
	return ret;
    }

int main(){
	int words=0;
	while(gets(a[words]) && strcmp(a[words],"#")!=0)
        words++;
	char input[1000];
	while(gets(input) && strcmp(input,"#")!=0){
		int frq[26];
		memset(frq,0,sizeof(frq));
		int len=strlen(input);
		for(int i=0;i<len;i++){
			if(isalpha(input[i]))
				frq[input[i]-'a']++;
            }
		int cnt=0;
		for(int i=0;i<words;i++){
			for(int j=0;j<26;j++)
				tmp[j]=frq[j];
			if(can_make(i))
                cnt++;
            }
		printf("%d\n",cnt);
        }
	return 0;
    }
