//UVa Problem-10701(Pre, in and post)
//Accepted
//Running time: 0.028 sec

#include<iostream>
using namespace std;

#define M 52

char str[3][M+1];

int dfs(const int& size,int k,int begin_p,int end_p,int ptr){
    if(size<=0)
        return ptr;
    str[3][--ptr]=str[0][k];
    if(size==1)
        return ptr;
    int temp;
    for(int i=begin_p;i<end_p;i++){
        if(str[0][k]==str[1][i]){
            temp=i;
            break;
            }
        }
    ptr=dfs(end_p-temp-1,k+temp-begin_p+1,temp+1,end_p,ptr);
    ptr=dfs(temp-begin_p,k+1,begin_p,temp,ptr);
    return ptr;
    }

int main(){
    int test;
    cin>>test;
    for(int c=0;c<test;c++){
        int len;
        cin>>len;
        cin>>str[0]>>str[1];
        str[3][len]='\0';
        dfs(len,0,0,len,len);
        cout<<str[3]<<endl;
        }
    return 0;
    }
