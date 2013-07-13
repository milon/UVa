//UVa Problem-713(Adding Reversed Numbers)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main (){
	long N,len,i,lenA,lenB,carry,sum[210],x;
	char A[210],B[210],temp[210];
	scanf("%ld",&N);
	while(N){
		for(i=0;i<210;i++)
			A[i]=B[i]=48;
		scanf("%s",temp);
		len=strlen(temp);
		while(temp[len-1]=='0')
			len--;
		lenA=0;
		for(i=0;i<len;i++)
			A[lenA++]=temp[i];
		scanf("%s",temp);
		len=strlen(temp);
		while(temp[len-1]=='0')
			len--;
		lenB=0;
		for(i=0;i<len;i++)
			B[lenB++]=temp[i];
		len=lenA>lenB?lenA:lenB;
		carry=x=0;
		for(i=0;i<len;i++){
			carry=(A[i]-48)+(B[i]-48)+carry;
			sum[x++]=carry%10;
			carry/=10;
			}
		while(carry!=0){
			sum[x++]=carry%10;
			carry/=10;
			}
		i=0;
		while(sum[i]==0)
			i++;
		while(i<x)
			printf("%d",sum[i++]);
		printf("\n");
		N--;
		}
	return 0;
	}
