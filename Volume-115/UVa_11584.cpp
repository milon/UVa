//UVa Problem-11584(Partitioning by Palindromes)
//Accepted
//Running time: 0.064 sec

#include<iostream>
#include<algorithm>
#include<cstring>
#include<climits>
using namespace std;

char inp[1000+10];
int state[1000+10];

bool isPalindrome(int s,int t){
    while(s<t){
        if(inp[s]!=inp[t])
            return false;
        s++;
        t--;
        }
    return true;
    }

int main(){
    int kase;
    cin>>kase;
    while(kase--){
        cin>>inp;
        int len=strlen(inp);
        for(int i=0;i<1010;i++)
            state[i]=INT_MAX;
        state[0]=0;
        state[1]=1;
        for(int i=1;i<len;i++){
            for(int j=0;j<=i;j++){
                if(isPalindrome(j,i)){
                    state[i+1]=min(state[i+1],state[j]+1);
                    }
                }
            }
        cout<<state[len]<<endl;
        }
    return 0;
    }
