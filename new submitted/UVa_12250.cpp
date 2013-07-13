//UVa Problem-12250(Language Detection)
//Accepted
//Running time: 0.020 sec
//

#include<map>
#include<string>
#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    map<string,string> Map;
    Map["HELLO"]="ENGLISH";
    Map["HOLA"]="SPANISH";
    Map["HALLO"]="GERMAN";
    Map["BONJOUR"]="FRENCH";
    Map["CIAO"]="ITALIAN";
    Map["ZDRAVSTVUJTE"]="RUSSIAN";
    for(int i=1; ;i++){
        string str;
        cin>>str;
        if(str=="#")
            break;
        if(Map.find(str)!=Map.end())
            cout<<"Case "<<i<<": "<<Map[str]<<endl;
        else
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
        }
    return 0;
    }
