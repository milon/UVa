//UVa Problem-10170(The Hotel with Infinite Rooms)
//Accepted
//Running time: 0.236 sec

#include<iostream>
using namespace std;

int main(){
    long s,d,i,n;
    while(cin>>s>>d){
        n=0;
        for(i=s;;i++){
            n+=i;
            if(n>d||n==d){
                cout<<i<<endl;
                break;
                }
            }
        }
    return 0;
    }
