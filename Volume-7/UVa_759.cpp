//UVa Problem-759(The Return of the Roman Empire)
//Accepted
//Running time: 0.120 sec
//Author: Milon

#include<iostream>
#include<string>
#include<map>
using namespace std;

int MP[100];
int Val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string r[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
map<string,int> Roman;

void init(){
    MP ['I']=1;
    MP ['V']=5;
    MP ['X']=10;
    MP ['L']=50;
    MP ['C']=100;
    MP ['D']=500;
    MP ['M']=1000;
    return;
    }

int r2n(char *STR){
    int Re, pre;
    Re = pre = MP[STR[0]];
    for(int i=1;STR[i];i++){
        if(MP[STR[i]]<=pre)
            Re+=MP[STR[i]];
        else
            Re=Re-2*pre+MP[STR[i]];
        pre=MP[STR[i]];
        }
    return Re;
    }

string n2r(int k){
    int i=0;
    string Re="";
    while(k>0){
        while(k>=Val[i]){
            Re+=r[i];
            k-=Val[i];
            }
        i++;
        }
    return Re;
    }

int main(){
    init();
    for(int i=1;i<4000;i++)
        Roman[n2r(i)]=i;
    char Data[105];
    while(gets(Data)){
        int t=Roman[Data];
        if(!t)
            puts("This is not a valid number");
        else
            printf("%d\n",t);
        }
    return 0;
    }
