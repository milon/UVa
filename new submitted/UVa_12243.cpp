//UVa Problem-12243(Flowers Flourish from)
//Accepted
//Running time: 0.056 sec

#include<cstdio>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;

int main(){
    while(true){
        string ss,s;
        getline(cin,ss);
        if(ss=="*")
            break;
        bool flag=true;
        stringstream in(ss);
        in>>s;
        char ch=tolower(s[0]);
        while(in>>s){
            if(tolower(s[0])!=ch){
                flag=false;
                break;
                }
            }
        if(flag)
            cout<<"Y\n";
        else
            cout<<"N\n";
        }
    return 0;
    }
