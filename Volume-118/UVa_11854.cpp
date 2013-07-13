//UVa Problem-11854(Egypt)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long input[3];
    while(cin>>input[0]>>input[1]>>input[2]){
        if(input[0]==0 && input[1]==0 && input[2]==0)
            break;
        sort(input,input+3);
        if(input[0]*input[0]+input[1]*input[1]==input[2]*input[2])
            cout<<"right\n";
        else
            cout<<"wrong\n";
        }
    return 0;
    }
