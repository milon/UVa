//UVa Problem-11888(Abnormal 89's)
//Accepted
//Running time: 0.376 sec

#include<iostream>
using namespace std;

char original[200000+5];

bool is_palindrome(int a,int b){
    while(a<b){
        if(original[a]!=original[b-1])
            return false;
        a++;
        b--;
        }
    return true;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>original;
        int len=strlen(original);
        bool suru=false;
        for(int i=0;i<len-1;i++){
            if(original[0]==original[i] && original[i+1]==original[len-1]){
                if(is_palindrome(0,i+1) && is_palindrome(i+1,len)){
                    suru=true;
                    cout<<"alindrome"<<endl;
                    break;
                    }
                }
            }
        if(!suru){
            if(is_palindrome(0,len))
                cout<<"palindrome"<<endl;
            else
                cout<<"simple"<<endl;
            }
        }
    return 0;
    }
