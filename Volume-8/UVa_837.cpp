//UVa Problem-837(Light and Transparencies)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

enum {beg,end};

class P{
    public:
        double x;
        double tr;
        int state;
        bool operator<(const P & a)const{
            return x < a.x;
            }
    };

void output(double x1,double x2,double t,bool inf,bool neginf){
    if(neginf)
        printf("-inf");
    else
        printf("%.3lf",x1);
    if(inf)
        printf(" +inf");
    else
        printf(" %.3lf",x2);
    printf(" %.3lf\n",t);
    }

void solve(vector<P> &in){
    int cntzero=0;
    double x1=0,x2=0;
    double tr=1;
    cout<<in.size()+1<<endl;
    for(int i=0;i<in.size();i++){
        x2=in[i].x;
        output(x1,x2,cntzero==0?tr:0,false,i==0);
        if(in[i].state==beg){
            if(in[i].tr==0)
                cntzero++;
            else
                tr*=in[i].tr;
            }
        else if(in[i].state==end){
            if(in[i].tr==0)
                cntzero--;
            else
                tr/=in[i].tr;
            }
        x1=x2;
        }
    output(x1,x2,tr,true,false);
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<P> a;
        for(int i=0;i<n;i++){
            double x1,x2,tr;
            double dum;
            cin>>x1>>dum>>x2>>dum>>tr;
            if(x1>x2)
                swap(x1,x2);
            a.push_back((P){x1,tr,beg});
            a.push_back((P){x2,tr,end});
            }
        sort(a.begin(),a.end());
        solve(a);
        if(test)
            cout<<endl;
        }
    return 0;
    }
