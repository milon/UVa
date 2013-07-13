//UVa Problem-10049(Self describing Sequence)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<algorithm>
using namespace std;

int num[700000];
int size=0;

void gen_number(){
    const int max=2000000000;
    num[0]=1;
    num[1]=2;
    num[2]=4;
    int i=1;
    for( ;num[num[i]-1]<max;++i){
        for(int j=num[i];j<num[i+1];++j){
            num[j]=num[j-1]+i+1;
            }
        }
    size=num[i]-1;
    }

int main(){
    gen_number();
    int n;
    while(cin>>n && n){
        cout<<upper_bound(num,num+size,n)-num<<endl;
        }
    return 0;
    }
