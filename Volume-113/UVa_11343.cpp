//UVa Problem-11343(Isolated Segments)
//Accepted
//Running time: 0.064 sec

#include<iostream>
#include<cmath>
#include<complex>
using namespace std;

double cross(complex<double> a,complex<double> b){
    return a.real()*b.imag()-a.imag()*b.real();
    }

bool is_point_online(complex<double> a,complex<double> b,complex<double> c){
    return abs(a-c)+abs(b-c)<abs(a-b)+1e-10;
    }

bool is_intersect_ls(complex<double> a1,complex<double> a2,complex<double> b1,complex<double> b2){
    if(is_point_online(a1,a2,b1))
        return true;
    if(is_point_online(a1,a2,b2))
        return true;
    if(is_point_online(b1,b2,a1))
        return true;
    if(is_point_online(b1,b2,a2))
        return true;
    if(cross(a2-a1,b1-a1)*cross(a2-a1,b2-a1)<0 && cross(b2-b1,a1-b1)*cross(b2-b1,a2-b1)<0)
        return true;
    return false;
    }

bool check(int n,complex<double>*p1,complex<double>*p2,int me){
    for(int i=0;i<n;i++){
        if(i==me)
            continue;
        if(is_intersect_ls(p1[me],p2[me],p1[i],p2[i]))
            return false;
        }
    return true;
    }

int solve(int n,complex<double>*p1,complex<double>*p2){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(check(n,p1,p2,i))
            cnt++;
        }
    return cnt;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        complex<double> p1[n],p2[n];
        for(int i=0;i<n;i++)
            cin>>p1[i].real()>>p1[i].imag()>>p2[i].real()>>p2[i].imag();
        cout<<solve(n,p1,p2)<<endl;
        }
    return 0;
    }
