//UVa Problem-10070(Leap Year or Not Leap Year and …)
//Accepted
//Running time: 0.024 sec

#include<cstring>
#include<iostream>
using namespace std;

int main(){
	long flag,mod4,mod100,mod400,mod15,mod55,i,len,leap;
	char suru[1000000];
	int print=0;
	while(cin>>suru){
		if(print!=0)
            cout<<endl;
		print=1;
		leap=flag=mod4=mod100=mod400=mod15=mod55=0;
		len=strlen(suru);
		for(i=0;i<len;i++){
			mod4=((mod4*10)+(suru[i]-'0'))%4;
			mod100=((mod100*10)+(suru[i]-'0'))%100;
			mod400=((mod400*10)+(suru[i]-'0'))%400;
			mod15=((mod15*10)+(suru[i]-'0'))%15;
			mod55=((mod55*10)+(suru[i]-'0'))%55;
            }
		if((mod4==0 && mod100!=0) || mod400==0){
			cout<<"This is leap year."<<endl;;
			leap=1;
			flag=1;
            }
		if(mod15==0){
			cout<<"This is huluculu festival year."<<endl;
			flag=1;
            }
		if(leap==1 && mod55==0)
			cout<<"This is bulukulu festival year."<<endl;
		if(flag==0)
			cout<<"This is an ordinary year."<<endl;
        }
	return 0;
    }
