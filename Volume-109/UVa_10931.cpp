//UVa Problem-10931(Parity)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

int main(){
    long num;
    int bin[1001],bit,len;
    while(cin>>num && num){
        len=1;
        bit=0;
        for(int i=1;i<=200;i++){
            bin[i]=num%2;
            if(bin[i]==1)
                bit++;
            num/=2;
            if(num==0)
                break;
            len++;
            }
        cout<<"The parity of ";
        for(int i=len;i>=1;i--)
            cout<<bin[i];
        cout<<" is "<<bit<<" (mod 2)."<<endl;
        }
    return 0;
    }
