//UVa Problem-11207(The easiest way)
//Accepted
//Running time: 0.032 sec

#include<iostream>
#include<algorithm>
using namespace std;

bool check(int w,int h,double &maxval){
    double temp=0;
    if(w<h) swap(w,h);
    if(w==h) temp=w/2.0;
    else temp=h/2.0;
    if(w>=h*4){
        if(temp<h) temp=h;
        }
    else{
        if(temp<w/4.0) temp=w/4.0;
        }
    if(temp>maxval){
        maxval=temp;
        return true;
        }
    return false;
    }

int main(){
    int n;
    while(cin>>n && n!=0){
        int index=-1;
        double maxval=0;
        for(int i=0;i<n;i++){
            int w,h;
            cin>>w>>h;
            if(check(w,h,maxval)==true)
                index=i;
            }
        cout<<index+1<<endl;
        }
    return 0;
    }
