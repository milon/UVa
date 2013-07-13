//UVa Problem-10420(List of Conquests)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

struct country{
    string name;
    int freq;
    }suru[2000];

bool compare(country x,country y){
    if(x.name<y.name)
        return true;
    else
        return false;
    }

int main(){
    int test;
    cin>>test;
    getchar();
    map<string,int> milon;
    map<string,int>::iterator it;
    while(test--){
        char input[75];
        gets(input);
        char ch[75],temp[75];
        strcpy(temp,input);
        sscanf(input,"%s",ch);
        milon[ch]++;
        }
    int len=0;
    for(it=milon.begin();it!=milon.end();it++){
        suru[len].name=(*it).first;
        suru[len].freq=(*it).second;
        len++;
        }
    sort(suru,suru+len,compare);
    for(int i=0;i<len;i++)
        cout<<suru[i].name<<" "<<suru[i].freq<<endl;
    return 0;
    }
