//UVa Problem-10424(Love Calculator)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char n1[50],n2[50];
    double temp1,temp2,len1,len2,per;
    int i,sum1,sum2;
    while(gets(n1)){
        gets(n2);
        sum1=0;
        sum2=0;
        len1=strlen(n1);
        len2=strlen(n2);
        for(i=0;i<len1;i++){
            if(n1[i]>='A' && n1[i]<='Z')
                sum1+=(n1[i]-64);
            else if(n1[i]>='a' && n1[i]<='z')
                sum1+=(n1[i]-96);
            }
        for(i=0;i<len2;i++){
            if(n2[i]>='A' && n2[i]<='Z')
                sum2+=(n2[i]-64);
            else if(n2[i]>='a' && n2[i]<='z')
                sum2+=(n2[i]-96);
            }
        int w,x,y;
        w=(sum1/100)+(sum1%100);
        x=(w/100)+(w%100);
        y=(x/10)+(x%10);
        temp1=(y/10)+(y%10);
        w=(sum2/100)+(sum2%100);
        x=(w/100)+(w%100);
        y=(x/10)+(x%10);
        temp2=(y/10)+(y%10);
        if(temp2<temp1){
            per=(temp2/temp1)*100;
            printf("%.2lf %\n",per);
            }
        else{
            per=(temp1/temp2)*100;
            printf("%.2lf %\n",per);
            }
        }
    return 0;
    }
