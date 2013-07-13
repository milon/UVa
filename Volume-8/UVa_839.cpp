//UVa Problem-839(Not so Mobile)
//Accepted
//Running time: 0.196 sec

#include<iostream>
using namespace std;

bool suru=false;

int dfs(){
    int w1,w2,d1,d2;
    cin>>w1>>d1>>w2>>d2;
    if(w1==0)
        w1=dfs();
    if(w2==0)
        w2=dfs();
    if(w1*d1==w2*d2)
        return w1+w2;
    else{
        suru=true;
        return 0;
        }
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        suru=false;
        dfs();
        if(suru)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        if(test)
            cout<<endl;
        }
    return 0;
    }
