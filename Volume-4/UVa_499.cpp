//UVa Problem-499(What's The Frequency, Kenneth?)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    char ch[100000];
    while(gets(ch)){
        int a[125]={0};
        long len=strlen(ch);
        for(int i=0;i<len;i++){
            if(isalpha(ch[i])!=0)
                a[(int)ch[i]]++;
            }
        int max=0;
        int j;
        for(j=65;j<123;j++)
			if(a[j]>max)
                max=a[j];
        for(j=65;j<123;j++){
            if(a[j]==max)
                cout<<(char)j;
            }
        cout<<" "<<max<<"\n";
        }
    return 0;
    }
