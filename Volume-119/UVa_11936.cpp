//UVa Problem-11936(The Lazy Lumberjacks)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]<(a[0]+a[1]))
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
        }
    return 0;
    }
