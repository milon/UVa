//UVa Problem-11480(Jimmy's Balls)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int main(){
    int n,index=0;
    while(cin>>n && n){
        long long answer;
        n-=3;
        answer=(long long)(n+2)*(n+1)/2;
        if(n%3==0)
            answer-=1+(n/2)*3;
        else
            answer-=(n/2+1)*3;
        answer/=6;
        cout<<"Case "<<++index<<": "<<answer<<endl;
        }
    return 0;
    }
