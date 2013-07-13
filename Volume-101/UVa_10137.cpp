//UVa Problem-10137(The Trip)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    double suru[1000],n;
    while(cin>>n && n){
        double sum=0;
        for(int i=0;i<n;i++){
            cin>>suru[i];
            sum+=suru[i];
            }
        double milon=sum/n;
        double neg=0,pos=0;
        for(int i=0;i<n;i++){
            double diff=(double)(long)((suru[i]-milon)*100.0)/100.0;
            if(diff<0)
                neg+= -diff;
            else
                pos+=diff;
            }
        printf("$%0.2lf\n",max(neg,pos));
        }
    return 0;
    }
