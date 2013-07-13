//UVa Problem-10719(Quotient Polynomial)
//Accepted
//Running time: 0.192 sec

#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

void solve(int k,vector<long long> in){
    vector<long long> out;
    int n = in.size();
    for(int i=1;i<n;i++){
        int qu = in[i-1];
        in[i]-=(qu*(-k));
        out.push_back(qu);
        }
    cout << "q(x):";
    for(int i=0;i<out.size();i++){
        cout <<" " <<  out[i];
        }
    cout << endl;
    cout << "r = " << in[n-1] << endl << endl;
    }

vector<long long> dec(string &in){
    stringstream sin(in);
    vector<long long> ret;
    long long tmp;
    while(sin>>tmp)
        ret.push_back(tmp);
    return ret;
    }

int main(){
    int k;
    while(cin>>k){
        string tmp;
        getline(cin,tmp);
        getline(cin,tmp);
        solve(k,dec(tmp));
        }
    return 0;
    }
