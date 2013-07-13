//UVa Problem-640(Self Numbers)
//Accepted
//Running time: 0.200 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    bool array[1000000];
    fill(array, array+1000000, true);
    for(int i=1,n,sum;i<=1000000;i++){
        if(array[i-1])
            cout<<i<<endl;
        n=i;
        sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
            }
        sum+=i;
        if(sum<=1000000)
            array[sum-1]=false;
        }
    return 0;
    }
