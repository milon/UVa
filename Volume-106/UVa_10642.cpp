//UVa Problem-10642(Can You Solve It?)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;
        cout<<"Case "<<i<<": ";
        int d1,d2;
        d1=y1;
        d2=y2;
        x1+=y1;
        x2+=y2;
        y1=0;
        y2=0;
        d1+=((1+x1)*x1/2);
        d2+=((1+x2)*x2/2);
        cout<<(d2-d1)<<endl;
        }
    return 0;
    }
