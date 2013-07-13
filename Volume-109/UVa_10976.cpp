//UVa Problem-10976(Fractions Again?!)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<vector>
using namespace std;

int compute(int k,int x){
    if(!(x*k%(x-k)))
        return x*k/(x-k);
    return -1;
    }

void solve(int k){
    vector<int> suru;
    for(int i=k+1; ;i++){
        int tmp=compute(k,i);
        if(tmp!= -1)
            suru.push_back(i);
        if(tmp!= -1 && tmp<=i)
            break;
        }
    cout<<suru.size()<<endl;
    for(int i=0;i<suru.size();i++){
        cout<<"1/"<<k<<" = ";
        cout<<"1/"<<compute(k,suru[i])<<" + ";
        cout<<"1/"<<suru[i]<<endl;
        }
    return;
    }

int main(){
    int n;
    while(cin>>n && n)
        solve(n);
    return 0;
    }
