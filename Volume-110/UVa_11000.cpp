//UVa Problem-11000(Bee)
//Accepted
//Running time: 0.008

#include<iostream>
using namespace std;

long int suru[1000];

int main(){
    unsigned long year,x,y;
    while(cin>>year){
        if(year==-1)
            break;
        else{
            long int a,b,c;
            a=suru[0]=1;
            b=suru[1]=2;
            for(int i=2;i<=year+1;i++){
                suru[i]=c=a+b;
                a=b;
                b=c;
                }
            cout<<suru[year]-1<<" "<<suru[year+1]-1<<endl;
            }
        }
    return 0;
    }
