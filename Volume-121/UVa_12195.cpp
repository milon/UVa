//UVa Problem-12195(Jingle Composing)
//Accepted
//Running time: 0.328 sec
//Author: Milon

#include<map>
#include<cmath>
#include<string>
#include<iostream>
using namespace std;

const double EPS=1e-9;

int main(){
    while(true){
        string str;
        cin>>str;
        if(str=="*")
            break;
        map<char,double> Map;
        Map['W']=1;
        Map['H']=1/2.0;
        Map['Q']=1/4.0;
        Map['E']=1/8.0;
        Map['S']=1/16.0;
        Map['T']=1/32.0;
        Map['X']=1/64.0;
        double C=0;
        int cnt=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='/'){
                if(abs(C-1.0)<=EPS)
                    ++cnt;
                C=0.0;
                }
            else
                C+=Map[str[i]];
            }
        cout<<cnt<<endl;
        }
    return 0;
    }
