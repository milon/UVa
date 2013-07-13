//UVa Problem-424(Integer Inquiry)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

char *r_str,*f_str;

char *reverse(char *s){
	char test;
	r_str = s;
	f_str = s;
	while(*s)
        s++;
	while(f_str<s){
		test=*(--s);
		*s=*f_str;
		*f_str++=test;
        }
	return(r_str);
    }

int main(){
	char s[101][130],result[133];
	int i,j,sum,bit,carry=0,max_len=0,valid=0,x[100];
	do{
		gets(s[valid]);
		reverse(s[valid]);
		valid++;
        }while(strcmp(s[valid-1],"0"));
	valid=valid-1;
	for(i=0;i<valid;i++)
		if(strlen(s[i])>max_len)
			max_len=strlen(s[i]);
	for(i=0;i<valid;i++)
		x[i] = 1;
	for(i=0;i<max_len;i++){
		sum = carry;
		for (j=0;j<valid;j++){
			if (s[j][i]==NULL)
				x[j] = 0;
			if (x[j])
				sum=sum+(s[j][i]-'0');
            }
		carry = sum/10;
		bit = sum%10;
		result[i] = bit+'0';
        }
	if(carry){
		result[i]=(carry%10)+'0';
		i++;
		carry=carry/10;
        }
	if(carry){
		result[i]=carry+'0';
		i++;
        }
	result[i]='\0';
	reverse(result);
	printf ("%s\n",result);
	return 0;
    }
