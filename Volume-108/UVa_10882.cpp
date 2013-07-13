//UVa Problem-10882(Koerner's Pub)
//Accepted
//Running time: 0.040 sec

#include<iostream>
using namespace std;

int main(){
    int kase;
    int cnt=1;
    cin>>kase;
    while(kase--){
        int a,b,c;
        cin>>a>>b>>c;
        int lb,ub;
        lb=(a+b+c+1-100)>>1;
        if(lb<0)lb=0;
        ub=min(a,b);
        ub=min(ub,c);
        cout<<"Case #"<<cnt++<<": ";
        if(lb>ub)
            cout<<"The records are faulty."<<endl;
        else
            cout<<"Between "<<lb<<" and "<<ub<<" times."<<endl;
        }
    return 0;
    }
