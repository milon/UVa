//UVa Problem-11489(Integer Game)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int test;
    cin>>test;
    int kase=0;
    while(test--){
        char num[1000+10];
        cin>>num;
        int freq[10+3];
        memset(freq,0,sizeof(freq));
        int sum=0;
        for(int i=0;num[i];i++){
            sum+=num[i]-'0';
            freq[num[i]-'0']++;
            }
        int allowed=freq[3]+freq[6]+freq[9];
        cout<<"Case "<<++kase<<": ";
        bool s_win=true;
        if(sum%3==0){
            if(allowed%2==0)
                s_win=false;
            }
        else if(sum%3==1){
            if(freq[1] || freq[4] || freq[7]){
                if(allowed%2)
                    s_win=false;
                }
            else
                s_win=false;
            }
        else{
            if(freq[2] || freq[5] || freq[8]){
                if(allowed%2)
                    s_win=false;
                }
            else
                s_win=false;
            }
        if(s_win)
            cout<<"S"<<endl;
        else
            cout<<"T"<<endl;
        }
    return 0;
    }
