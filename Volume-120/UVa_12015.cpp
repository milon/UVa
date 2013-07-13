//UVa Problem-12015(Google is Feeling Lucky)
//Accepted
//Running time: 0.064 sec
//Author: Milon

#include<iostream>
#include<cstring>
using namespace std;

struct search{
    char URL[100];
    int relevence;
    }google[10];

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        for(int i=0;i<10;i++){
            cin>>google[i].URL>>google[i].relevence;
            }
        int max=0;
        for(int i=0;i<10;i++)
            if(google[i].relevence>max)
                max=google[i].relevence;
        cout<<"Case #"<<++kase<<":"<<endl;
        for(int i=0;i<10;i++)
            if(google[i].relevence==max)
                cout<<google[i].URL<<endl;
        }
    return 0;
    }
