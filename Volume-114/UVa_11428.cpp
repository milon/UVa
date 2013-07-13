//UVa Problem-11428(Cubes)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cmath>
using namespace std;

#define MAX 60

int binary_search(int *cubes, int i_low, int i_hi, int i_n){
    int i=i_low,j=i_hi,m;
    while(i<=j){
        m=(i+j)>>1;
        if(cubes[m]<i_n)
            i=m+1;
        else
            j=m-1;
        }
    return i;
    }

int main(){
    int n,i,index,x,max;
    double delta;
    int cubes[MAX];
    for(i=0;i<MAX;i++)
        cubes[i]=i*i*i;
    while(cin>>n && n){
        for(i=0;cubes[i]<n;i++);
        delta=sqrt(1+4*1*(n-1)/3.0);
        max=(int)((1+delta)/2.0);
        for(;i<=max;i++){
            x=cubes[i]-n;
            index=binary_search(cubes,1,max,x);
            if(cubes[index]==x){
                cout<<i<<" "<<index<<endl;
                i=-1;
                break;
                }
            }
        if(i!=-1)
            cout<<"No solution"<<endl;
        }
    return 0;
    }
