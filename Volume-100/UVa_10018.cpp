//UVa Problem-10018(Reverse and Add)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int j=0;
	while(j<n){
		char s[12],r[12],a[12],ar[12];
		scanf("%s",&s);
		int x,q,c,y;
		q=strlen(s);
		for(x=q-1,y=0;x>=0;x--,y++){
			r[x]=s[y];
			}
		r[y]='\0';
		c=strcmp(r,s);
		int count=0;
		while(c!=0){
			int i,k,ca=0;
			for(i=q-1,k=0;i>=0;i--,k++){
				int e=s[i]-'0';
				int f=r[i]-'0';
				int ans=0;
				ans=e+f+ca;
				if(ans>9&&ans<20){
					ca=1;
					a[k]=(ans-10)+'0';
					}
				else{
					ca=0;
					a[k]=ans+'0';
					}
				}
			if(ca>0){
				a[k]=ca+'0';
				k++;
				}
			a[k]='\0';
			for(x=k-1,y=0;x>=0;x--,y++)
				ar[y]=a[x];
			ar[y]='\0';
			strcpy(s,ar);
			q=strlen(s);
			for(x=q-1,y=0;x>=0;x--,y++)
				r[x]=s[y];
			r[y]='\0';
			c=strcmp(s,r);
			count++;
			}
		printf("%d %s\n",count,s);
		j++;
		}
	return 0;
	}
