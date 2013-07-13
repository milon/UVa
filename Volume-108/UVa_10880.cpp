//UVa Problem-10880(Colin and Ryan)
//Accepted
//Running time: 0.112 sec

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int kase;
    cin>>kase;
    int cnt=1;
    while(kase--){
        int n,r;
        cin>>n>>r;
        cout<<"Case #"<<cnt++<<":";
        if(n==r){
            cout<<" 0"<<endl;
            continue;
            }
        int q=n-r;
        vector<int> v;
        for(int i=1;i*i<=n;i++){
            if(q%i==0){
                if(i>r)
                    v.push_back(i);
                if(i!=(q/i) && (q/i)>r)
                    v.push_back(q/i);
                }
            }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<" "<<v[i];
            cout<<endl;
        }
    return 0;
    }
