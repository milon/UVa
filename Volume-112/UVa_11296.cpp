//UVa Problem-11296(Counting Solutions of an Integer Equation)
//Accepted
//Running time: 0.136 sec

#include<iostream>
using namespace std;

int main(){
    int n;
    unsigned long long counter;
    while(cin>>n){
        counter=0;
        if(n%2==0)
            for(int i=0;i<=n;i+=2)
                counter+=(n-i)/2+1;
        else
            for(int i=1;i<=n;i+=2)
                counter+=(n-i)/2+1;
        cout<<counter<<endl;
        }
    return 0;
    }
