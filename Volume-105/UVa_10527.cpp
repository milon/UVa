//UVa Problem-10527(Persistent Numbers)
//Accepted
//Running time: 0.044 sec

#include<iostream>
using namespace std;

int ans[10];

string div(string &in,int num){
    int now=0;
    string ret="";
    for(int i=0;i<in.size();i++){
        now=now*10+in[i]-'0';
        if(now/num>0){
            ret+=(char)(now/num+'0');
            now=now%num;
            }
        else if(ret.size()>0)
            ret+='0';
        }
    if(now!=0)
        return in;
    else
        return ret;
    }

void solve(string in){
    int cnt=0;
    for(int i=0;i<10;i++)
        ans[i]=0;
    if(in=="0"){
        cnt=1;
        ans[0]++;
        }
    else if(in=="1"){
        cout<<"11"<<endl;
        return;
        }
    for(int i=9;i>=2 && in!="0";i--){
        ans[i]=0;
        while(true){
            string tmp;
            tmp=div(in,i);
            if(tmp==in)
                break;
            else
                in=tmp;
            ans[i]++;
            cnt++;
            }
        }
    if(cnt==1)
        ans[1]=1;
    string ret="";
    if(in.size()>1){
        cout<<"There is no such number."<<endl;
        return;
        }
    for(int i=1;i<10;i++){
        if(ans[i]>0){
            cout<<i;
            ans[i]--;
            break;
            }
        }
    for(int i=0;i<10;i++){
        for(int j=0;j<ans[i];j++)
            cout<<i;
        }
    cout<<endl;
    return;
    }

int main(){
    string in;
    while(cin>>in && in!="-1")
        solve(in);
    return 0;
    }
