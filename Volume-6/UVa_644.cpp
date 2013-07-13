//UVa Problem-644(Immediate Decodability)
//Accepted
//Running time: 0.200 sec
//Author: Milon

#include<iostream>
#include<string>
using namespace std;

#define max 20

char suru[max][max],temp[max];
int total=-1,cnt=0;

int main(){
    while(cin>>suru[++total]){
        if(suru[total][0]!='9')
            continue;
        bool milon=true;
        --total;
        for(int i=0;i<=total && milon;i++)
            for(int j=0;j<=total && milon;j++)
                if(i!=j && strlen(suru[j])>=strlen(suru[i])){
                    sprintf(temp,"%.*s",strlen(suru[i]),suru[j]);
                    if(strcmp(temp,suru[i])==0)
                        milon=false;
                    }
        cout<<"Set "<<++cnt<<" is ";
        if(milon)
            cout<<"immediately decodable"<<endl;
        else
            cout<<"not immediately decodable"<<endl;
        total=-1;
        }
    return 0;
    }
