//UVa Problem-353(Pesky Palindromes)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;

char input[100];
map<string,bool>visited;

bool palindrome(int x,int l){
    if(x>=l)
        return false;
    char temp[100];
    int len=0;
    while(x<l)
        temp[len++]=input[x++];
    temp[len]=0;
    char rev[100];
    strcpy(rev,temp);
    reverse(rev,rev+len);
    if(strcmp(rev,temp)==0){
        if(visited[temp]==true)
            return false;
        visited[temp]=true;
        return true;
        }
    return false;
    }

int main(){
    while(cin>>input){
        visited.clear();
        int len=strlen(input);
        int count=0;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(palindrome(i,len-j))
                    count++;
                }
            }
        cout<<"The string '"<<input<<"' contains "<<count<<" palindromes."<<endl;
        }
    return 0;
    }
