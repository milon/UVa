//UVA Problem-10104(Euclid Problem)
//Accepted
//Running time: 0.116 sec

#include<cstdio>
using namespace std;

int gcd(int a, int b, int &x, int &y){
    int x1, y1, g;
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

int main(){
    int a, b, g, x=0, y=0;
    while(scanf("%d %d", &a, &b) == 2){
        g = gcd(a,b,x,y);
        printf("%d %d %d\n", x, y, g);
        }
    return 0;
    }
