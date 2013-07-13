//UVa Problem-128(Software CRC)
//Accepted
//Running time: 0.144 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main (){
	char input[2000];
	while(gets(input) && input[0]!='#'){
		unsigned long long sum=0;
		int len=strlen(input);
		for(int i=0;i<len;i++){
			sum<<=8;
			sum%=34943;
			sum+=input[i];
			sum%=34943;
            }
		sum<<=16;
		sum%=34943;
		int hexa=(34943-sum)%34943;
		printf("%02X %02X\n",hexa>>8,hexa%256);
        }
	return 0;
    }
