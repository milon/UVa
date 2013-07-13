//UVa Problem-11678(Cards' Exchange)
//Accepted
//Running time: 0.096 sec

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int x[100000+10];
int y[100000+10];

int main(){
    int a,b;
    while(cin>>a>>b && a && b){
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        int input;
        for(int i=0;i<a;i++){
            cin>>input;
            x[input]++;
            }
        for(int i=0;i<b;i++){
            cin>>input;
            y[input]++;
            }
        int counta=0,countb=0;
        for(int i=1;i<=100000;i++){
            if(x[i] && !y[i]) counta++;
            if(y[i] && !x[i]) countb++;
            }
        cout<<min(counta,countb)<<endl;
        }
    return 0;
    }
