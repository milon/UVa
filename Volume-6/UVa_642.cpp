//UVa Problem-642(Word Amalgamation)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<string>
using namespace std;

int main(){
    string dictionary[105];
    string scramble;
    string end="XXXXXX";
    int len=0;
    while(cin>>dictionary[len] && dictionary[len]!=end)
        len++;
    sort(dictionary,dictionary+len);
    while(cin>>scramble && scramble!=end){
        sort(scramble.begin(),scramble.end());
        bool print=false;
        for(int i=0;i<len;i++){
            string temp=dictionary[i];
            sort(temp.begin(),temp.end());
            if(scramble==temp){
                cout<<dictionary[i]<<endl;
                print=true;
                }
            }
        if(!print)
            cout<<"NOT A VALID WORD"<<endl;
        cout<<"******"<<endl;
        }
    return 0;
    }
