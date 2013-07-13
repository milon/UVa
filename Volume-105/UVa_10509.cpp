//UVa Problem-10509(R U Kidding Mr. Feynman?)
//Accepted
//Running time: 0.204 sec

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int cub[100];

int main(){
    for(int i=0;i<100;i++)
        cub[i]=(i+1)*(i+1)*(i+1);
    while(true){
        int a;
        double n,dx;
        cin>>n;
        if(n==0)
            break;
        for(int i=0;i<100;i++){
            if(n>=cub[i])
                a=i+1;
            }
        dx=(n-cub[a-1])/(3.0*a*a);
        cout<<setprecision(4)<<setiosflags(ios::fixed)<<(double)a+dx<<endl;
        }
    return 0;
    }
