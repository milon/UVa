//UVa Problem-11634(Generate random numbers)
//Accepted
//Running time: 0.120 sec

#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        set<int>suru;
        suru.insert(n);
        while(true){
            n=n*n;
            n/=100;
            n%=10000;
            if(suru.find(n)!=suru.end())
                break;
            suru.insert(n);
            }
        cout<<suru.size()<<endl;
        }
    return 0;
    }
