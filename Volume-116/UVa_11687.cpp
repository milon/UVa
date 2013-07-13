//UVa Problem-11687(Digits)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<string>
using namespace std;

char input[1000000];
int cnt;

int recursive(int x){
    sprintf(input,"%d",x);
    int x1=strlen(input);
    cnt++;
    if(x1==x)
        return cnt;
    recursive(x1);
    }

int main(){
    while(gets(input) && strcmp(input,"END")){
        if(strcmp(input,"1")==0){
            cout<<"1"<<endl;
            continue;
            }
        cnt=1;
        cout<<recursive(strlen(input))<<endl;
        }
    return 0;
    }
