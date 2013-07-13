//UVa Problem-10090(Marbels)
//Accepted
//Running time: 0.064 sec

#include<iostream>
using namespace std;

long long gcd(long long a,long long b,long long &x,long long &y){
    long long x1, y1, g;
    //if(b>a)
      //  return gdc(b,a,y,x);
    if(b == 0){
        x = 1;
        y = 0;
        return a;
        }
    g = gcd(b,a%b,x1,y1);
    x = y1;
    y = x1 - int(a/b)*y1;
    return g;
    }

bool fit(long long n,long long c1,long long n1,long long c2,long long n2,long long &m1,long long &m2){
    long long g = gcd(n1, n2, m1, m2);
    if(n % g != 0)
        return false;
    n1 /= g, n2 /= g, n /= g;
    m1 *= n, m2 *= n;
    long long l = m1 >= 0 ? -m1 / n2 : (-m1 + n2 - 1) / n2;
    long long h = m2 >= 0 ? m2 / n1 : (m2 - n1 + 1) / n1;
    if(l > h)
        return false;
    long long cf = c1 * n2 - c2 * n1;
    if(cf * l <= cf *h){
        m1 = m1 + n2 * l;
        m2 = m2 - n1 * l;
        }
    else{
        m1 = m1 + n2 * h;
        m2 = m2 - n1 * h;
        }
    return true;
    }

int main(){
    long long n,m1=0,m2=0;
    while(cin>>n && n){
        long long c1,n1,c2,n2;
        cin>>c1>>n1>>c2>>n2;
        if(fit(n, c1, n1, c2, n2, m1, m2)){
            cout<<m1<<" "<<m2<<endl;
            }
        else
            cout<<"failed"<<endl;
        }
    return 0;
    }
