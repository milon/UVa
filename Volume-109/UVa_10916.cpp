//UVa Problem-10916(Factstone Benchmark)
//Accepted
//Running time: 0.252 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int in;
    double log2=log(2);
    while(cin>>in && in){
        int loop=(in-1960)/10;
        double bit=4;
        for(int i=0;i<loop;i++)
            bit*=2;
        double input=(bit)*log2;
        double temp=0;
        for(int i=1; ;i++){
            temp+=log((double)i);
            if(!(temp<input)){
                cout<<i-1<<endl;
                break;
                }
            }
        }
    return 0;
    }
