//UVa Problem-10408(Farey sequences)
//Accepted
//Running time: 0.128 sec

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class suru{
    public:
        int u,d;
        bool operator <(const suru &a)const{
            return u*a.d>a.u*d;
            }
        bool operator ==(const suru &a)const{
            return u*a.d==a.u*d;
            }
    };

int main(){
    vector<suru> all;
    for(int i=1;i<1001;i++){
        for(int j=1;j<=i;j++){
            int g=__gcd(i,j);
            all.push_back((suru){j/g,i/g});
            }
        }
    sort(all.begin(),all.end());
    all.erase(unique(all.begin(),all.end()),all.end());
    int n,k;
    reverse(all.begin(),all.end());
    while(cin>>n>>k){
        int cnt=0;
        for(int i=0;i<all.size();i++){
            if(all[i].d<=n)
                cnt++;
            if(cnt==k){
                cout<<all[i].u<<"/"<<all[i].d<<endl;
                break;
                }
            }
        }
    return 0;
    }

