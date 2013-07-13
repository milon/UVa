//UVa Problem-599(The Forrest for the Trees)
//Accepted
//Running time: 0.572 sec
//Author: Milon

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int test,edge,node,tree,acorn;
    bool suru[26];
    string str;
    cin>>test;
    for(int i=0;i<test;i++){
        edge=node=tree=acorn=0;
        fill(suru,suru+26,false);
        while(true){
            cin>>str;
            if(str[0]=='*')
                break;
            edge++;
            suru[str[1]-'A']=suru[str[3]-'A']=true;
            }
        cin>>str;
        node=(str.length()+1)/2;
        for(int i=0;i<26;i++)
            if(suru[i])
                acorn++;
        acorn=node-acorn;
        tree=node-edge-acorn;
        cout<<"There are "<<tree<<" tree(s) and "<<acorn<<" acorn(s)."<<endl;
        }
    return 0;
    }

