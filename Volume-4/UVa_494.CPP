//UVa Problem-494(Kindergarten Counting Game)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cctype>
using namespace std;

int solution(char *ch){
	int count=0,pre=1;
	for(int i=0;ch[i];i++){
		if(isalpha(ch[i])){
			if(pre)
				count++;
			pre=0;
			}
		else pre=1;
		}
	return count;
	}

int main(){
	char ch[5000];
	int total;
	while(gets(ch)){
		total=solution(ch);
		printf("%d\n",total);
		}
	return 0;
	}
