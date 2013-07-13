//UVa Problem-11660(Look-and-Say sequences)
//Accepted
//Running time: 1.444 sec

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string str[1000+10];

int main(){
	int a,b;
    while(cin>>str[0]>>a>>b){
        if(str[0]=="0" && a==0 && b==0) 
			break;
        str[0]+='-';
		char num[1000];
        for(int i=1;i<a;i++){
            int cnt=1;
			str[i]="";
			for(int j=0;j<str[i-1].size()-1 && j<=1000;j++){
                if(str[i-1][j]==str[i-1][j+1])
					cnt++;
                else{
					sprintf(num,"%d",cnt);
                    str[i]+=num;
					str[i]+=str[i-1].at(j);
					cnt=1;
					}
				}
            str[i]+="-";
			}
        cout<<str[a-1][b-1]<<endl;
		}
	return 0;
	}
