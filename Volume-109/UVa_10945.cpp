//UVa Problem-10945(Mother Bear)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    char line[10000],m,test[10000],x,reverse[10000];
    int len,i,j,k,l,p;
    while(gets(line)){
        if(line[0]=='D' && line[1]=='O' && line[2]=='N' && line[3]=='E')
            break;
        len=strlen(line);
        j=0;p=0;
        for(i=0;i<len;i++){
            x=tolower(line[i]);
            if(x>='a' && x<='z')
                test[j++]=x;
            }
        test[j]='\0';
        l=j;
        for(i=0,j=l-1;i<l/2,j>=l/2;i++,j--){
            if(test[i]!=test[j]){
                p=1;
                break;
                }
            }
        if(p!=0)
            cout<<"Uh oh.."<<endl;
        else
            cout<<"You won't be eaten!"<<endl;
        }
    return 0;
    }
