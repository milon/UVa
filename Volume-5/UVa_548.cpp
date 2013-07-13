//UVa Problem-548(Tree)
//Accepted
//Running time: 0.228 sec
//Author: Milon

#include<iostream>
#include<cstdio>
using namespace std;

struct value{
    int path_value;
    int leaf;
    };

int inorder[10005];
int postorder[10005];
int Value_Path;
int Value_Leaf;

void dfs(int n,int *a,int *b,int sum){
    if(n<=0)
        return ;
    if(n==1){
        if(sum+b[n-1]<Value_Path){
            Value_Path=sum+b[n-1];
            Value_Leaf=b[n-1];
            }
        else{
            if(sum+b[n-1]==Value_Path)
                if(b[n-1]<Value_Leaf)
                    Value_Leaf=b[n-1];
            }
        return ;
        }
    int i;
    for(i=0;i<n;i++)
        if(b[n-1]==a[i])
            break;
    dfs(i,a,b,sum+b[n-1]);
    dfs(n-i-1,a+i+1,b+i,sum+b[n-1]);
    }

int main(){
    int leaf;
    int count=0;
    int i;
    while(cin>>leaf){
        inorder[count++]=leaf;
        if(getchar()=='\n'){
            for(i=0;i<count;i++)
                cin>>postorder[i];
            Value_Path=200000000;
            Value_Leaf=10005;
            dfs(count,inorder,postorder,0);
            cout<<Value_Leaf<<endl;
            count=0;
            }
        }
    return 0;
    }
