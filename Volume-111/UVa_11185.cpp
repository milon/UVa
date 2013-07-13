//UVa Problem-11185(Ternary)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    long int ter[1000],num,i,l,mod;
    while(cin>>num){
        if(num<0)
            break;
        for(i=0;i<100;i++){
            ter[i]=num%3;
            num/=3;
            if(num==0){
                l=i;
                break;
                }
            }
        for(i=l;i>=0;i--){
            ter[i-1]=ter[i]*10+ter[i-1];
            mod=ter[i];
            }
        cout<<mod<<endl;
        }
    return 0;
    }
