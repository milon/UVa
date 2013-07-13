//UVa Problem-11498(Division of Nlogonia)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

int main(){
    long int x,y,x1,y1;
    long int t;
    while(cin>>t){
        if(t==0)
            break;
        cin>>x1>>y1;
        for(long i=1;i<=t;i++){
            cin>>x>>y;
            if(x==x1 || y==y1)
                cout<<"divisa"<<endl;
            else if(x>x1 && y>y1)
                cout<<"NE"<<endl;
            else if(x<x1 && y>y1)
                cout<<"NO"<<endl;
            else if(x<x1 && y<y1)
                cout<<"SO"<<endl;
            else
                cout<<"SE"<<endl;
            }
        }
    return 0;
    }
