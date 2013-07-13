//UVa Problem-10340(All in all)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char *a;
char *b;
int len;

bool all(int n,int m){
	if(m==len)
		return true;
	int length=strlen(b);
	for(int i=n;i<length;i++){
		if(a[m]==b[i])
			return all(i+1,m+1);
		}
	return false;
	}

int main(){
	char s[1000000];
	while(gets(s)!=NULL){
		a=strtok(s," ");
		b=strtok(NULL," ");
		len=strlen(a);
		if(all(0,0))
			cout<<"Yes\n";
		else
			cout<<"No\n";
		}
	return 0;
	}
