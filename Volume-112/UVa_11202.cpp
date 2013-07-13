//UVa Problem-11202(The Least Possible Effort)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

long long solve(long long row,long long column){
    long long ret=0;
    long long evenr=row+(row%2?-1:0);
    long long evenc=column+(column%2?-1:0);
    ret+=(evenr*evenc)/4;
    if(row%2==1)
        ret+=(evenc/2);
    if(column%2==1)
        ret+=(evenr/2);
    if(row%2==1 && column%2==1)
        ret++;
    if(row==column && column%2==1){
        ret=row/2+(row/2)*(row/2-1)/2;
        ret+=(evenr/2)+1;
        }
    else if(row==column && column%2==0){
        ret=row/2+(row/2)*(row/2-1)/2;
        }
    return ret;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        long long row,col;
        cin>>row>>col;
        cout<<solve(row,col)<<endl;
        }
    return 0;
    }
