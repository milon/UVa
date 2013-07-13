//UVa Problem-384(Slurpys)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

bool is_slump(string &in,int &p){
    if(!(p<in.size() && (in[p]=='D' || in[p]=='E')))
        return false;
    p++;
    if(!(p<in.size() && in[p]=='F'))
        return false;
    while(p<in.size() && in[p]=='F')
        p++;
    if(in[p]=='G'){
        p++;
        return true;
        }
    else
        return is_slump(in,p);
    }

bool is_slimp(string &in,int &p){
    if(!(p<in.size() && in[p]=='A'))
        return false;
    p++;
    if(p<in.size() && in[p]=='H'){
        p++;
        return true;
        }
    if(p<in.size() && in[p]=='B'){
        p++;
        if(p<in.size() && is_slimp(in,p))
            ;
        else
            return false;
        }
    else if(p<in.size() && is_slump(in,p))
        ;
    else
        return false;
    if(p<in.size() && in[p]=='C'){
        p++;
        return true;
        }
    else
        return false;
    }

int main(){
    int test;
    cin>>test;
    string in;
    puts("SLURPYS OUTPUT");
    while(test--){
        cin>>in;
        int p=0;
        if(is_slimp(in,p) && is_slump(in,p) && p == in.size())
            puts("YES");
        else
            puts("NO");
        }
    puts("END OF OUTPUT");
    return 0;
    }
