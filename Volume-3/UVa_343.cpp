//UVa Problem-343(What Base Is This?)
//Accepted
//Running time: 0.036 sec

#include<cstdio>
#include<cctype>
#include<cstring>
#include<algorithm>
using namespace std;

int firstInTen[36+3];
int secondInTen[36+3];
char first[100];
char second[100];

void reset(){
    for(int i=0;i<36+3;i++){
        firstInTen[i]=-1;
        secondInTen[i]=-2;
        }
    }

int power(int i,int j){
    int output=1;
    for( int k=1;k<=j;k++)
        output*=i;
    return output;
    }

void convetToTen(char *a,int *save){
    int equivalent=0;
    int len=strlen(a);
    int startBase=0;
    for(int i=0;a[i];i++){
        if(!isdigit(a[i]))
            equivalent=a[i]-55;
        else
            equivalent=a[i]-48;
        startBase=max(startBase,equivalent);
        }
    for(int i=startBase+1;i<=36;i++){
        int sum=0;
        for(int j=len-1;j>=0;j--){
            if(!isdigit(a[j]))
                equivalent=a[j]-55;
            else
                equivalent=a[j]-48;
            sum+=(equivalent*power(i,len-1-j));
            }
        save[i]=sum;
        }
    }

bool isSame(){
    for(int i=2;i<=36;i++){
        for(int j=2;j<=36;j++){
            if(firstInTen[i]==secondInTen[j]){
                printf("%s (base %i) = %s (base %i)\n",first,i,second,j);
                return true;
                }
            }
        }
    return false;
    }

int main(){
	char suru[1000];
	while(gets(suru)){
	    reset();
		sscanf(suru,"%s %s",first,second);
	    convetToTen(first,firstInTen);
	    convetToTen(second,secondInTen);
	    if(!isSame())
	        printf("%s is not equal to %s in any base 2..36\n",first,second);
        }
	return 0;
    }

