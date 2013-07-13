//UVa Problem-10194(Football(aka Soccer))
//Accepted
//Running time: 0.032 sec

#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

class team{
    public:
        int p,w,l,g,sg,sa;
        string name,cmp;

        team(){
            p=0;
            w=0;
            l=0;
            g=0;
            sg=0;
            sa=0;
            }

        void setname(string &t){
            name=t;
            for(int i=0;i<name.size();i++){
                cmp+=tolower(name[i]);
                }
            }

        bool operator<(const team & a)const{
            if(p!=a.p)
                return p>a.p;
            if(w!=a.w)
                return w>a.w;
            if(sg-sa!=a.sg-a.sa)
                return sg-sa>a.sg-a.sa;
            if(sg!=a.sg)
                return sg>a.sg;
            if(g!=a.g)
                return g<a.g;
            return cmp<a.cmp;
            }
    };

void set_input(string *name,int *sc,string &t){
    int p=0;
    while(t[p]!='#')
        name[0]+=t[p++];
    p++;
    while(t[p]!='@')
        sc[0]=sc[0]*10+t[p++]-'0';
    p++;
    while(t[p]!='#')
        sc[1]=sc[1]*10+t[p++]-'0';
    p++;
    while(p<t.size())
        name[1]+=t[p++];
    }

void insert(string &t,team *data,map<string,int> &M){
    string name[2];
    int sc[2]={0};
    int p[2];
    set_input(name,sc,t);
    p[0]=M[name[0]];
    p[1]=M[name[1]];
    for(int i=0;i<2;i++){
        data[p[i]].sg+=sc[i];
        data[p[i]].g++;
        data[p[i]].sa+=sc[1-i];
        }
    if(sc[0]>sc[1]){
        data[p[0]].p+=3;
        data[p[0]].w++;
        data[p[1]].l++;
        }
    else if(sc[1]>sc[0]){
        data[p[1]].p+=3;
        data[p[1]].w++;
        data[p[0]].l++;
        }
    else{
        data[p[0]].p++;
        data[p[1]].p++;
        }
    return;
    }

void op(int n,team *data){
    sort(data,data+n);
    for(int i=0;i<n;i++){
        cout<<i+1<<") "<<data[i].name<<" "<<data[i].p<<"p, "<<data[i].g<<"g ("
            <<data[i].w<<"-"<<data[i].g-data[i].w-data[i].l<<"-"<<data[i].l<<
            "), "<<data[i].sg-data[i].sa<<"gd ("<<data[i].sg<<"-"<<data[i].sa<<")"<<endl;
        }
    }

int main(){
    int test;
    cin>>test;
    string a;
    getline(cin,a);
    while(test--){
        getline(cin,a);
        cout<<a<<endl;
        map<string,int> M;
        int n;
        cin>>n;
        getline(cin,a);
        team inp[n];
        for(int i=0;i<n;i++){
            getline(cin,a);
            M[a]=i;
            inp[i].setname(a);
            }
        int m;
        cin>>m;
        getline(cin,a);
        for(int i=0;i<m;i++){
            getline(cin,a);
            insert(a,inp,M);
            }
        op(n,inp);
        if(test)
            cout<<endl;
        }
    return 0;
    }
