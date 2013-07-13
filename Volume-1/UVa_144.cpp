//UVa Problem-144(Student Grants)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<queue>
#include<cstdio>
#include<iostream>
using namespace std;

void solve(int n,int lim){
    int pay=1,tmp=1;
    pair<int,int> now;
    queue<pair<int,int> > Q;
    for(int i=0;i<n;i++)
        Q.push(make_pair(i+1,0));
    while(!Q.empty()){
        now=Q.front();
        Q.pop();
        if(now.second+pay<40){
            now.second+=pay;
            Q.push(now);
            pay=0;
            }
        else{
            printf("%3d",now.first);
            pay=pay-(40-now.second);
            }
        if(pay==0){
            tmp=tmp%lim+1;
            pay=tmp;
            }
        }
    putchar('\n');
    return ;
    }

int main(){
    int n,k;
    while(cin>>n>>k && n)
        solve(n,k);
    return 0;
    }
