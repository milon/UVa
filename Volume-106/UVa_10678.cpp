//UVa Problem-10678(The Grazing Cow)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const double PI=2*acos(0.0);

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double a,b,c,area;
        cin>>c>>a;
        c/=2.0;
        a/=2.0;
        b=sqrt(a*a-c*c);
        area=a*b*PI;
        cout<<setprecision(3)<<setiosflags(ios::fixed)<<area<<endl;
        }
    return 0;
    }
