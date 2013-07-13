//UVa Problem-10730(Antiarithmetic?)
//Accepted
//Running time: 0.036 sec

#include<iostream>
#include<vector>
using namespace std;

int ind[10000];

bool isexist(vector<int>&in){
    int n= in.size();
    for(int i=0;i<in.size();i++){
        for(int j=1;(in[i]+2*j <= n-1 || in[i]-2*j >=0);j++){
            if(in[i]+2*j<=n-1){
                if(i<ind[in[i]+j] && ind[in[i]+j]<ind[in[i]+2*j])
                    return true;
                }
            else if (in[j]-2+j >= 0){
                if(i<ind[in[i]-j] && ind[in[i]-j]<ind[in[i]-2*j])
                    return true;
                }
            }
        ind[in[i]]=-1;
        }
    return false;
    }

int main(){
    int n;
    char dum;
    while(cin>>n>>dum && n){
        vector<int> in;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            in.push_back(tmp);
            ind[in[i]]=i;
            }
        if(!isexist(in))
            puts("yes");
        else puts("no");
        }
    return 0;
    }

