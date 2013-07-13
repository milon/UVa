//UVa Problem-337(Interpreting Control Sequences)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

const int R=10,C=10;

char m[R][C];

void b(int &r,int &c){
    c=0;
    }

void cl(int &r,int &c){
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            m[i][j]=' ';
    }

void d(int &r,int &c){
    if(r+1!=R)
        r++;
    }

void e(int &r,int &c){
    for(int j=c;j<C;j++)
        m[r][j]=' ';
    }

void h(int &r,int &c){
    r=0;
    c=0;
    }

void ii(bool &isins){
    isins=true;
    }

void l(int &r,int &c){
    if(c-1>=0)
        c--;
    }

void o(bool &isins){
    isins=false;
    }

int rr(int &r,int &c){
    if(c+1!=C)
        c++;
    }

void u(int &r,int &c){
    if(r-1>=0)
        r--;
    }

void op(int &r,int &c,bool &isins,char a){
    if (isins){
        for(int i=C-1;i>c;i--)
            m[r][i]=m[r][i-1];
        m[r][c]=a;
        if(c+1!=C)
            c++;
        }
    else{
        m[r][c]=a;
        if(c+1!=C)
            c++;
        }
    }

void solve(string &in){
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            m[i][j]=' ';
    int p=0;
    int r=0,c=0;
    bool isins=false;
    while(p<in.size()){
        if(in[p]=='^' && p+1<in.size()){
            char tmp=in[p+1];
            p++;
            if(tmp=='b')
                b(r,c);
            else if(tmp=='c')
                cl(r,c);
            else if(tmp=='d')
                d(r,c);
            else if(tmp=='e')
                e(r,c);
            else if(tmp=='h')
                h(r,c);
            else if(tmp=='i')
                ii(isins);
            else if(tmp=='l')
                l(r,c);
            else if(tmp=='o')
                o(isins);
            else if(tmp=='r')
                rr(r,c);
            else if(tmp=='u')
                u(r,c);
            else if(tmp=='^')
                op(r,c,isins,'^');
            else{
                r=in[p]-'0';
                c=in[p+1]-'0';
                p++;
                }
            }
        else
            op(r,c,isins,in[p]);
        p++;
        }
    cout<<"+----------+"<<endl;
    for(int i=0;i<R;i++){
        cout<<"|";
        for(int j=0;j<C;j++)
            cout<<m[i][j];
        cout<<"|"<<endl;;
        }
    cout<<"+----------+"<<endl;
    }

int main(){
    int n,tc=1;
    while(cin>>n && n){
        string a="";
        getline(cin,a);
        a.clear();
        cout<<"Case "<<tc++<<endl;
        for(int i=0;i<n;i++){
            string tmp;
            getline(cin,tmp);
            a+=tmp;
            }
        solve(a);
        }
    return 0;
    }
