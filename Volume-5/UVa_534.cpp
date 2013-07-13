//UVa Problem-534(Frogger)
//Accepted
//Running time: 0.052 sec
//Author: Milon

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

double power(int base,int pow){
    double res=1;
    for(int i=0;i<pow;i++)
        res*=base;
    return res;
    }

int main(){
    int stone,kase=0;
    while(cin>>stone && stone){
        int x[200],y[200];
        for(int i=0;i<stone;i++)
            cin>>x[i]>>y[i];
        double d[200][200];
        for(int i=0;i<stone;i++){
            for(int j=i+1;j<stone;j++){
                d[i][j] = d[j][i] = sqrt(power(x[i]-x[j],2)+power(y[i]-y[j],2));
                }
            }
        for(int k=0;k<stone;k++){
            for(int i=0;i<stone;i++){
                for(int j=0;j<stone;j++){
                    d[i][j] = min(d[i][j],max(d[i][k],d[k][j]));
                    }
                }
            }
        cout<<"Scenario #"<<++kase<<endl;
        printf("Frog Distance = %.3lf\n\n",d[0][1]);
        }
    return 0;
    }
