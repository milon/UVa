//UVa Problem-10310(Dog and Gopher)
//Accepted
//Running time: 0.028 sec

#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long n,kase,i,j,k;
    double gx,gy,dx,dy,hx[1001],hy[1001],gdis,ddis;
    while(cin>>n>>gx>>gy>>dx>>dy){
        int goph=0,x;
        for(i=1;i<=n;i++)
            cin>>hx[i]>>hy[i];
        for(i=1;i<=n;i++){
            gdis=4*(pow((hx[i]-gx),2)+pow((hy[i]-gy),2));
            ddis=pow((hx[i]-dx),2)+pow((hy[i]-dy),2);
            if(gdis<=ddis){
                goph++;
                x=i;
                break;
                }
            }
        if(goph==0)
            cout<<"The gopher cannot escape."<<endl;
        else
            printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",hx[x],hy[x]);
        }
    return 0;
    }
