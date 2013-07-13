//UVa Problem-119(Greedy Gift Givers)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

string people[10];
int money[10];
int num;
bool begin=true;

void print(){
    if(begin)
        begin=false;
    else
        putchar(10);
    for(int i=0;i<num;i++)
        cout<<people[i]<<" "<<money[i]<<endl;
    return;
    }

int main(){
    string temp;
    bool rn=true;
    string giving;
    int value;
    int pn;
    bool first=true;
    memset(money,0,sizeof(money));
    while(getline(cin,temp,'\n')){
        if(int(temp.size())==0)
            continue;
        stringstream sin(temp);
        if(temp[0]>='0'&&temp[0]<='9'){
            if(first)
                first=false;
            else print();
            sin>>num;
            rn=true;
            memset(money,0,sizeof(money));
            continue;
            }
        if(rn){
            for(int i=0;i<num;i++)
                sin>>people[i];
            rn=false;
            continue;
            }
        sin>>giving;
        int loc;
        for(int i=0;i<num;i++)
            if(people[i]==giving)
                loc=i;
        sin>>value>>pn;
        if(pn==0)
            continue;
        money[loc]+=value%pn-value;
        for(int i=0;i<pn;i++){
            sin>>giving;
            for(int j=0;j<num;j++)
                if(people[j]==giving)
                    money[j]+=value/pn;
            }
        }
    print();
    return 0;
    }
