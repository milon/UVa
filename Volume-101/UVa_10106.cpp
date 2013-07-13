//UVa Problem-10106(Product)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

#define max 1000

int main(){
	char x[max], y[max];
	long len_x,len_y,i,j,k,temp[max],carry;
	while(cin>>x>>y){
		long result[max] = {0};
		len_x = strlen(x);
		len_y = strlen(y);
		for(j=len_y-1;j>=0;j--){
            k = 0;
			while(k<((len_y-1)-j))
				temp[k++] = 0;
			carry = 0;
			for(i=len_x-1;i>=0;i--){
				carry = ((x[i]-'0')*(y[j]-'0'))+carry;
				temp[k++]=carry%10;
				carry /= 10;
                }
			while(carry){
				temp[k++] = carry%10;
				carry /= 10;
                }
			for(i=0;i<k;i++){
				carry = result[i]+temp[i]+carry;
				result[i] = carry % 10;
				carry /= 10;
                }
			while(carry){
				result[i++] = carry % 10;
				carry /= 10;
                }
            }
		k=i-1;
		while(result[k]==0)
			k--;
		if(k==-1)
			printf("0");
		else {
			while(k!=-1)
				printf("%ld",result[k--]);
            }
		printf("\n");
        }
	return 0;
    }
