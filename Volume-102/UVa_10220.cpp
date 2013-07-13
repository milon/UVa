//UVa Problem-10220(I Love Big Numbers!)
//Accepted
//Running time: 0.072 sec

#include<iostream>
#include<cstring>
using namespace std;

#define max 1000

int main(){
	char *fact[max+1];
	long factsum[max+1]={0};
    fact[0]="1";
	fact[1]="1";
    factsum[0]=1;
    factsum[1]=1;
	for(long i=2;i<=max;i++){
		long len1=strlen(fact[i-1]);
		int ilen=0;
		int i1=i;
		int i2[4]={0};
		while(i1>0){
			i2[ilen++]=i1%10;
			i1/=10;
			}
		char *mul;
		mul=new char[len1+10];
		char *str;
		char *f;
		long j=0;
		long d2=0;
		for(long j1=0;j1<ilen;j1++){
			int ca=0;
			j=0;
			str=new char[len1+10];
			for(long j2=len1-1;j2>=0;j2--){
				int a=fact[i-1][j2]-48;
			   	int res=i2[j1]*a+ca;
			   	ca=res/10;
			   	res=res%10;
			   	str[j++]=res+48;
			   	}
			if(ca>0)
				str[j++]=ca+48;
			str[j]='\0';

			if(j1==0){
				d2=0;
			   	for(long d1=j-1;d1>=0;d1--,d2++)
					mul[d2]=str[d1];
				mul[d2]='\0';
				}
			else
				{
				long d=j1;
				f=new char[j+d2+10];
				long fl=0;
				for(long l1=j-1;l1>=0;l1--,fl++)
					f[fl]=str[l1];
				for(long d3=0;d3<d;d3++,fl++)
					f[fl]='0';
				f[fl]='\0';
				int ca1=0;
				char sum[1000000];
				long ls=0;
				for(long l2=d2-1,l3=fl-1;l2>=0||l3>=0;l2--,l3--){
					int a1,b1;
				   	if(l2<0)a1=0;
				   	else a1=mul[l2]-48;
				   	if(l3<0)b1=0;
				   	else b1=f[l3]-48;
				   	int res1=a1+b1+ca1;
				   	if(res1>9){
						sum[ls++]=(res1-10)+48;
						ca1=1;
						}
				   else	{
					   	sum[ls++]=res1+48;
					   	ca1=0;
					   	}
				   }
				if(ca1>0)
					sum[ls++]='1';
				sum[ls]='\0';
				d2=0;
				for(long ls1=ls-1;ls1>=0;ls1--,d2++)
					mul[d2]=sum[ls1];
				mul[d2]='\0';
				}
			}
		fact[i]=new char[d2+1];
		strcpy(fact[i],mul);
		long fal=strlen(fact[i]);
        for(long digit=0;digit<fal;digit++)
        	factsum[i]+=fact[i][digit]-48;
        }
	long n;
	while(cin>>n){
		cout<<factsum[n]<<"\n";
		}
	return 0;
	}
