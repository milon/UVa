//UVa Problem-10407(Simple division)
//Accepted
//Running time: 0.104 sec

#include<iostream>
#include<vector>
using namespace std;

long long gcd(long long a,long long b){
    return b == 0?a:gcd(b,a%b);
    }

bool solve(){
    vector<long long> a;
    a.clear();
    long long n;
    while(cin>>n && n){
        a.push_back(n);
        }
    if(a.size() == 0)
        return false;
    vector<long long> b;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i] == a[j])
                continue;
            b.push_back(a[i]-a[j]>0?a[i]-a[j]:a[j]-a[i]);
            }
        }
    long long g=b[0];
    for(int i=1;i<b.size();i++){
        g=gcd(g,b[i]);
        }
    cout << g << endl;
    return true;
    }

int main(){
    while(solve());
    return 0;
    }
