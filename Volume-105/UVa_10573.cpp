//UVa Problem-10573(Geometry Paradox)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<iomanip>
using namespace std;

#define PI 2*acos(0.0)

int main(){
    int N,r1,r2,t;
    char ar[20];
    cin>>N;
    getchar();
    for(int i=0;i<N;i++){
        gets(ar);
        char *tmp_a=NULL,*tmp_b=NULL;
        tmp_a=strtok(ar," ");
        tmp_b=strtok(NULL," ");
        if(tmp_b!=NULL){
            r1=atoi(tmp_a);
            r2=atoi(tmp_b);
            cout<<setprecision(4)<<setiosflags(ios::fixed)<<2*PI*r1*r2<<endl;
            }
        else{
            t=atoi(tmp_a);
            cout<<setprecision(4)<<setiosflags(ios::fixed)<< t*t*PI/8 << endl;
            }
        }
    return 0;
    }
