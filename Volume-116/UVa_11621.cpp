//UVa Problem-11621(Small Factors)
//Accepted
//Running time: 0.040 sec

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<long long> suru;
    set<long long> ::iterator it;
    suru.insert(2);
    suru.insert(3);
    for(it=suru.begin();it!=suru.end();it++){
        if((*it)*2>(long long)INT_MAX+3)
            break;
        suru.insert((*it)*2);
        suru.insert((*it)*3);
        }
    long long n;
    while(cin>>n && n){
        if(n==1){
            cout<<"1"<<endl;
            continue;
            }
        for(it=suru.begin();it!=suru.end();it++){
            if((*it)>=n){
                cout<<*it<<endl;
                break;
                }
            }
        }
    return 0;
    }
