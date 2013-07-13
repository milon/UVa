//UVa Problem-270(Lining up)
//Accepted
//Running time: 2.472 sec
//Author: Milon

#include<iostream>
#include<sstream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct{
    int x,y;
    } Pair;

string str;
Pair data[705];
int ncase,c=0,Max=0,ncount=0;

bool cmp(Pair a,Pair b){
    if(a.x!=b.x)
        return a.x<b.x;
    else
        return a.y<b.y;
    }

void init(){
    memset(data,0,sizeof(Pair));
    while(getline(cin,str)){
        if(str.size()==0)
            break;
        stringstream is(str);
        int a,b;
        is>>a>>b;
        data[c].x=a;
        data[c].y=b;
        c++;
        }
    }

int main(){
    cin>>ncase;
    getchar();
    getline(cin,str);
    for(int i=0;i<ncase;++i){
        c=0,ncount=0,Max=0;
        init();
        sort(data,data+c,cmp);
        for(int j=0;j<c-1;++j){
            for(int k=j+1;k<c;++k){
                ncount=0;
                int A,B,C;
                A=data[j].y-data[k].y;
                B=data[j].x-data[k].x;
                C=data[j].y*B-A*data[j].x;
                for(int m=0;m<c;++m){
                    if(data[m].x*A-data[m].y*B+C==0)
                        ncount++;
                    }
                if(Max<ncount)
                    Max=ncount;
                }
            }
        if(i)
            cout<<endl;
        cout<<Max<<endl;
        }
    return 0;
    }
