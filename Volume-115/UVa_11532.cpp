//UVa Problem-11532(Simple Adjacency Maximization)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

unsigned long long power_of_2(int b){
    unsigned long long ret=1;
    for(int i=1;i<=b;i++)
        ret*=2;
    return ret;
    }

void make_decimal(string suru){
    unsigned long long ret=0;
    for(size_t i=0;i<suru.length();i++)
        ret+=(power_of_2(i)*(suru.at(i)-'0'));
    cout<<ret<<endl;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int p,q;
        cin>>p>>q;
        string str="";
        while(p>=2 && q>=1){
            str+="101";
            p-=2;
            q--;
            }
        if(p==1 && q>=1){
            str="01"+str;
            p--;
            q--;
            }
        for(int i=0;i<p;i++)
            str+="1";
        reverse(str.begin(),str.end());
        make_decimal(str);
        }
    return 0;
    }
