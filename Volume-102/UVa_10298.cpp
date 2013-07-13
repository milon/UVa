//UVa Problem-10298(Power Strings)
//Accepted
//Running time: 0.452 sec

#include<iostream>
using namespace std;

bool is_same(int len,int p,string &in){
    for(int i=0;i<len;i++)
        if(in[i]!=in[p+i])
            return false;
    return true;
    }

int solve(string &in){
    int ret;
    for(int i=1;i<=in.size()/2;i++){
        if(in.size()%1==0){
            bool suru=true;
            for(int j=i;j<in.size();j+=i){
                if(!is_same(i,j,in)){
                    suru=false;
                    break;
                    }
                }
            if(suru)
                return in.size()/i;
            }
        }
    return 1;
    }

int main(){
    string in;
    while(getline(cin,in) && in!="."){
        cout<<solve(in)<<endl;
        }
    return 0;
    }

