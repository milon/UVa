//UVa Problem-12027(Very Big Perfect Squar)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	while(true){
		string str;
		int i,j;
		cin>>str;
		if(str=="0")
			break;
		int l=str.length();
		int n=(int)(str[0]-'0');
		if(l%2==0){
			n*=10;
			n+=(str[1]-'0');
            }
		cout<<(int)sqrt(n);
		for(int i=1;i<=ceil(l/2.0)-1;i++)
			cout<<"0";
		cout<<endl;
        }
	return 0;
    }

