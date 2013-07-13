//UVa Problem-389(Basically Speaking)
//Accepted
//Running time: 0.376 sec

#include<iostream>
#include<cstring>
#include<iomanip>
#include<cmath>
using namespace std;

char ans[1000];

long power(long base, long p){
    long sum=1;
    for(long i=0;i<p;i++)
        sum*=base;
    return sum;
    }

long original(char ar[],long a){
    long len=strlen(ar),temp,sum=0;
    for(long i=0,j=len-1;i<len,j>=0;i++,j--){
        if(ar[i]>='0' && ar[i]<='9')
            temp=ar[i]-'0';
        else
            temp=ar[i]-55;
        sum+=temp*power(a,j);
        }
    return sum;
    }

void converted(long sum,long b){
    char s[100];
    long temp,i=0;
    do{
        temp=sum%b;
        if(temp>=10)
            s[i]=temp+55;
        else
            s[i]=temp+48;
        sum/=b;
        i++;
        }while(sum);
    s[i]='\0';
    int len=strlen(s);
    for(int i=0,j=len-1;i<len;i++,j--){
        ans[j]=s[i];
        }
    }

int main(){
    char suru[100];
    long a,b,sum;
    while(cin>>suru>>a>>b){
        sum=original(suru,a);
        memset(ans,'\0',100);
        converted(sum,b);
        if(strlen(ans)<=7)
            cout<<setw(7)<<ans<<endl;
        else
            cout<<"  ERROR"<<endl;
        }
    return 0;
    }
