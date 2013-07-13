//UVa Problem-11830(Contract Revision)
//Accepted
//Running time: 0.020 sec

#include<iostream>
using namespace std;

void solve(string &suru, char a){
    bool milon=false;
    for(int i=0;i<suru.size();i++){
        if(suru[i]==a)
            continue;
        if(!milon && suru[i]=='0')
            continue;
        milon=true;
        cout<<suru[i];
        }
    if(!milon)
        cout<<"0";
    cout<<endl;
    }

int main(){
    string suru;
    char a;
    while(cin>>a>>suru){
        if(a=='0' && suru=="0")
            break;
        solve(suru,a);
        }
    return 0;
    }
