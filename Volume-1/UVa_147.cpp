//UVa Problem-147(Dollars)
//Accepted
//Running time: 0.908 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
    vector<int>coins;
    coins.push_back(5);
    coins.push_back(10);
    coins.push_back(20);
    coins.push_back(50);
    coins.push_back(100);
    coins.push_back(200);
    coins.push_back(500);
    coins.push_back(1000);
    coins.push_back(2000);
    coins.push_back(5000);
    coins.push_back(10000);
    long double val;
    while(cin>>val){
        if(val==0.00)
            break;
        int value=(int)(val*100);
        if(value%5>=3)
            value+=5-(value%5);
        else if(value%5>0 && value%5<2)
            value-=(value%5);
        vector<long long int> flag(value+1,0);
        flag[0]=1;
        for(int i=0;i<coins.size();i++){
            for(int j=0;j<=value;j+=5){
                if (j-coins[i]>=0 && flag[j-coins[i]]!=0){
                    flag[j]+=flag[j-coins[i]];
                    }
                }
            }
        double temp=(double)val;
        printf("%6.2f%17lld\n",temp,flag[value]);
        }
    return 0;
    }
