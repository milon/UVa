//UVa Problem-10940(Throwing cards away II)
//Accepted
//Running time: 0.248 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long input,p,i,x;
    while(cin>>input && input){
        for(i=0;i<=19;i++){
            p=(long)pow(2,i);
            if(input<=p)
                break;
            }
        x=p-(p-input)*2;
        cout<<x<<endl;
        }
    return 0;
    }
