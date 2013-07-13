//UVa Problem-409(Excuses, Excuses!)
//Accepted
//Running time: 0.024 sec

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char str[21][25];
char cmp[21][80];
char newstr[21][80];
int coun[21];
int longth[21];
int sum=0;

int math(int k,char *str,char *newstr){
    int len=strlen(str);
    int lennew=longth[k];
    int num=0,flag=0;
    char arr[25];
    int l=0,count=0;
    for(int i=0;i<lennew;i++){
        if(isalpha(newstr[i])){
            flag=1;
            num++;
            arr[l++]=newstr[i];
            }
        else{
            if(num==len && !strcmp(str,arr))
                count++;
            flag=0;
            num=0;
            l=0;
            memset(arr,0,sizeof(arr));
            }
        }
    return count;
    }

int main(){
    int n,m;
    int k=0;
    while(cin>>n>>m){
        // cout<<n<<m<<endl;
        memset(str,0,sizeof(str));
        memset(cmp,0,sizeof(cmp));
        memset(coun,0,sizeof(coun));
        memset(longth,0,sizeof(longth));
        memset(newstr,0,sizeof(newstr));
        k++;
        getchar();
        int max=0;
        for(int i=0;i<n;i++)
            gets(str[i]);
        for(int i=0;i<m;i++){
            gets(cmp[i]);
            longth[i]=strlen(cmp[i]);
            for(int j=0;j<longth[i];j++)
                newstr[i][j]=tolower(cmp[i][j]);
            }
        for(int i=0;i<m;i++){
            sum=0;
            for(int j=0;j<n;j++){
                sum+=math(i,str[j],newstr[i]);
                coun[i]=sum;
                }
            }
        cout<<"Excuse Set #"<<k<<endl;
        max=coun[0];
        for(int i=1;i<m;i++)
            if(coun[i]>max)
                max=coun[i];
        for(int i=0;i<m;i++)
            if(coun[i]==max)
                cout<<cmp[i]<<endl;
        cout<<endl;
        }
    return 0;
    }
