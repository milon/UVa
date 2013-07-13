//UVa Problem-11192(Group Reverse)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char line[102];
    int i,j,group,a,b,len,start,end;
    while(scanf("%d\n",&group)==1){
        if(group==0)
            break;
        else{
            gets(line);
            start=0;
            end=0;
            len=strlen(line);
            a=len/group;
            for(i=0;i<len;i++){
                if((i+1)%a==0){
                    end=i;
                    for(j=end;j>=start;j--){
                        cout<<line[j];
                        }
                    start=end+1;
                    }
                }
            }
        cout<<endl;
        }
    return 0;
    }
