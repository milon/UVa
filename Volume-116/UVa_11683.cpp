//UVa Problem-11683(Laser Sculpture)
//Accepted
//Running time: 0.052 sec

#include<iostream>
using namespace std;

int solve(int height,int c,int *data){
    int cnt=0;
    for(int i=0;i<c;i++){
        if(data[i]<height)
            cnt+=height-data[i];
        height=data[i];
        }
    return cnt;
    }

int main(){
    int height,c;
    while(cin>>height>>c && height){
        int data[c];
        for(int i=0;i<c;i++)
            cin>>data[i];
        cout<<solve(height,c,data)<<endl;
        }
    return 0;
    }
