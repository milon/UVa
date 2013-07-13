//UVa Problem-213(Message Decoding)
//Accepted
//Running time: 0.364 sec
//Author: Milon

#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

vector<string> all;

void makeall(int n,int now,string a){
    if(n==now){
        if(count(a.begin(),a.end(),'1')==a.size());
        else
            all.push_back(a);
        return;
        }
    makeall(n,now+1,a+"0");
    makeall(n,now+1,a+"1");
    }

bool solve(map<string,char> &m){
    char c;
    int num=0,mul=4;
    for(int i=0;i<3;i++){
        cin>>c;
        num+=(c-'0')*mul;
        mul/=2;
        }
    if(num==0)
        return false;
    while(true){
        string tmp="";
        for(int i=0;i<num;i++){
            cin>>c;
            tmp+=string(1,c);
            }
        if(m.count(tmp))
            cout<<m[tmp];
        if(count(tmp.begin(),tmp.end(),'1')==num)
            break;
        }
    return true;
    }

int main(){
    for(int i=1;i<8;i++)
        makeall(i,0,"");
    string in;
    while(getline(cin,in)){
        map<string,char> m;
        for(int i=0;i<in.size();i++)
            m[all[i]]=in[i];
        while(solve(m));
        cout<<endl;
        getline(cin,in);
        }
    return 0;
    }
