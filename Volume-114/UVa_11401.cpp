//UVa Problem-11401(Triangle Counting)
//Accepted
//Running time: 0.048 sec

#include<iostream>
using namespace std;

#define N 1000000

long long array[N],temp;

int main(){
    array[0]=0;
    for(int i=1;i<N;i++){
        temp=temp+(i+1)/2;
        array[i]=temp+array[i-1];
        }
    int n;
    while((cin>>n) && (n>=3))
        cout<<array[n-3]<<endl;
    return 0;
    }
