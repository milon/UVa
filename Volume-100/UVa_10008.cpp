//UVa Problem-10008(What's Cryptanalysis?)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int fig[26];
	int fre[26]={0};
	for(int n=0,m=65;n<26;n++,m++)
		fig[n]=m;
	int cas;
	cin>>cas;
	char ch[10000];
	int i,j;
	while(cin>>ch){
		int len=strlen(ch);
		for(i=0;i<len;i++){
			for(j=0;j<26;j++){
				if(ch[i]==fig[j]||ch[i]==fig[j]+32){
					fre[j]++;
					break;
					}
			  	}
			}
		}
	for(i=1;i<26;i++){
		for(j=1;j<=26-i;j++){
			if(fre[j-1]<fre[j]){
				int temp1,temp2;
			  	temp1=fre[j-1];
			  	temp2=fig[j-1];
			  	fre[j-1]=fre[j];
			  	fig[j-1]=fig[j];
			  	fre[j]=temp1;
			  	fig[j]=temp2;
			  	}
			}
		}
	for(i=0;i<26;i++){
		if(fre[i]!=0)
		cout<<(char)fig[i]<<" "<<fre[i]<<"\n";
		}
	return 0;
}
