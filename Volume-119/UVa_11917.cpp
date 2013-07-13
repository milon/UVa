//UVa Problem-11917(Do Your Own Homework!)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<iostream>
#include<cstring>
using namespace std;

struct subject{
    char s_name[25];
    int date;
    }sub[25];

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        int n,due,milon;
        bool suru=false;
        char due_sub[25];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>sub[i].s_name>>sub[i].date;
        cin>>due>>due_sub;
        for(int i=0;i<n;i++)
            if(strcmp(due_sub,sub[i].s_name)==0){
                suru=true;
                milon=i;
                break;
                }
        if(!suru)
            cout<<"Case "<<++kase<<": Do your own homework!"<<endl;
        else{
            if(due>=sub[milon].date)
                cout<<"Case "<<++kase<<": Yesss"<<endl;
            else if(due+5>=sub[milon].date)
                cout<<"Case "<<++kase<<": Late"<<endl;
            else
                cout<<"Case "<<++kase<<": Do your own homework!"<<endl;
            }
        }
    return 0;
    }
