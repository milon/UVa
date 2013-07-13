//UVa Problem-10009(All Roads Lead Where?)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<string>
using namespace std;

map<string,string> work;

void init(){
    work.clear();
    work["Rome"]="!Ancestor";
    }

int main(){
    int v,m,n,i,j;
    string a,b;
    vector<string> s,e;
    set<string> appeared;
    cin>>v;
    while(v--){
        init();
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a>>b;
            work[b]=a;;
            }
        for(i=0;i<m;i++){
            s.clear();
            e.clear();
            appeared.clear();
            cin>>a>>b;
            while(a!="!Ancestor"){
                s.push_back(a);
                appeared.insert(a);
                a=work[a];
                }
            while(!appeared.count(b)){
                e.push_back(b);
                b=work[b];
                }
            for(j=0;s[j]!=b;j++)
                cout<<s[j][0];
            cout<<s[j][0];
            for(j=e.size()-1;j>=0;j--)
                cout<<e[j][0];
            cout<<endl;
            }
        if(v!=0)
            cout<<endl;
        }
    return 0;
    }
