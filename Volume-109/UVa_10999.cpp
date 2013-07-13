//UVa Problem-10999(Crabbles)
//Accepted
//Running time: 0.700 sec

#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int ans=0;
set<string> S;

int solve(int p,pair<int,char> *in){
    int ret=0;
    for(int i=0;i<(1<<p);i++){
        string tmp="";
        int score=0;
        for(int j=0;j<p;j++){
            if(((1<<j)&i)!=0){
                score+=in[j].first;
                tmp+=string(1,in[j].second);
                }
            }
        sort(tmp.begin(),tmp.end());
        if(S.find(tmp)!=S.end())
            ret=max(ret,score);
        }
    return ret;
    }

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        sort(tmp.begin(),tmp.end());
        S.insert(tmp);
        }
    int test;
    cin>>test;
    while(test--){
        int p;
        cin>>p;
        pair<int,char> in[p];
        for(int i=0;i<p;i++)
            cin>>in[i].second>>in[i].first;
        ans=0;
        cout<<solve(p,in)<<endl;
        }
    return 0;
    }

