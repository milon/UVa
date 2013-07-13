//UVa Problem-10299(Relatives)
//Accepted
//Running time: 0.440 sec

#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector< pair<int,int> > fact(int n){
    vector< pair<int,int> > ret;
    for(int i=2;i*i <= n;i+=2){
        if (n%i == 0){
            int cnt=0;
            while(n%i==0 && n/i!=0){
                cnt++;
                n/=i;
                }
            ret.push_back(make_pair(i,cnt));
            }
        if(i==2)
            i--;
        }
    if(n!=1)
        ret.push_back(make_pair(n,1));
    return ret;
    }

int myp(int n,int p){//n^p
    int ret=1;
    int now=n;
    while(p>0){
        if(p&1)
            ret*=now;
        now*=now;
        p>>=1;
        }
    return ret;
    }

int solve(int n,vector< pair<int,int> > &tmp){
    if(n==1)
        return 0;
    int ret=1;
    for(int i=0;i<tmp.size();i++){
        ret*=(myp(tmp[i].first,tmp[i].second)-myp(tmp[i].first,tmp[i].second-1));
        }
    return ret;
    }

int main(){
    int n;
    while(cin>>n && n){
        vector< pair<int,int> > tmp=fact(n);
        cout<<solve(n,tmp)<<endl;
        }
    return 0;
    }
