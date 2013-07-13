//UVa Problem-10494(If We Were a Child Again)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

void solve(string &in,long long a,bool flag){
    string qu;
    long long now=0;
    for(int i=0;i<in.size();i++){
        now=now*10+in[i]-'0';
        if(now/a>0){
            qu+=(char)('0'+now/a);
            now=now%a;
            }
        else if(qu.size()!=0)
            qu+='0';
        }
    if(qu.size()==0)
        qu='0';
    if(flag==false)
        cout<<qu<<endl;
    else
        cout<<now%a<<endl;
    }

int main(){
    string in,op;
    long long a;
    while(cin>>in>>op>>a){
        solve(in,a,op=="%"?true:false);
        }
    return 0;
    }

