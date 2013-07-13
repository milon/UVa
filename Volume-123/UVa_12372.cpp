//UVa Problem-12372(Packing for Holiday)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    int test,kase=1;
    cin>>test;
    while(test--){
        int L,W,H;
        cin>>L>>W>>H;
        if(L<=20&&W<=20&&H<=20)
            cout<<"Case "<<kase++<<": good"<<endl;
        else
            cout<<"Case "<<kase++<<": bad"<<endl;
        }
    return 0;
    }
