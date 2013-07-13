//UVa Problem-10282(Babelfish)
//Accepted
//Running time: 1.032 sec

#include<iostream>
#include<map>
#include<sstream>
using namespace std;

map<string,string> entry;

int main(){
    string str,pstr,qstr;
    while(getline(cin,str)){
        if(str=="")
            break;
        istringstream fin(str);
        while(!fin.eof()){
            fin>>pstr>>qstr;
            entry[qstr]=pstr;
            }
        }
    while(cin>>str){
        if(entry[str]!="")
            cout<<entry[str]<<endl;
        else
            cout<<"eh"<<endl;
        }
    return 0;
    }
