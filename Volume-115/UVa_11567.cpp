//UVa Problem-11567(Moliu Number Generator)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

long long choice(long long suru){
    long long s1=suru+1;
    long long s2=suru-1;
    int ret=0;
    if(suru==3)
        return 2;
    if(s2==0)
        return s2;
    while(!(s1%2) && s1!=0){
        s1/=2;
        ret++;
        }
    while(!(s2%2) && s2!=0){
        s2/=2;
        ret--;
        }
    if(ret>0)
        return suru+1;
    return suru-1;
    }

int main(){
    long long suru;
    while(cin>>suru){
        int cnt=0;
        while(suru!=0){
            if(suru%2==0)
                suru/=2;
            else
                suru=choice(suru);
            cnt++;
            }
        cout<<cnt<<endl;
        }
    return 0;
    }

