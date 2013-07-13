//UVa Problem-10905(Children’s Game)
//Accepted
//Running time: 0.408 sec

#include<iostream>
#include<vector>
using namespace std;

int n;
string str;

bool condition(string a,string b){
    bool s =(a+b)<(b+a);
    return s;
    }

int main(){
    while(1){
        vector<string>t;
        cin>>n;
        if(n==0) break;
        while(n--){
            cin>>str;
            t.push_back(str);
            }
        sort(t.begin(),t.end(),condition);
        for(int i=t.size()-1;i>=0;i--){
            cout<<t[i].c_str();
            }
        cout<<endl;
        }
    return 0;
    }
