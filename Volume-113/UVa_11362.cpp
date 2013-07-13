//UVa Problem-11362(Phone List)
//Accepted
//Running time: 0.308 sec

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string num[10000];

bool prefix_check(string a, string b){
    if(b.size()<a.size())
        return false;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i])
            return false;
        }
    return true;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(prefix_check(num[i],num[i+1])){
                flag=false;
                break;
                }
            }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    return 0;
    }
