//UVa Problem-10215(The Largest/Smallest Box...)
//Accepted
//Running time: 0.044 sec

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    double l,w;
    while(cin>>l>>w){
        double a,b;
        a=pow(10,-9)+(l+w-sqrt(l*l-l*w+w*w))/6.0;
        b=pow(10,-9)+min(l,w)/2.0;
        printf("%.3lf %.3lf %.3lf\n",a,0.0,b);
        }
    return 0;
    }
