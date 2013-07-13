//UVa Problem-11520(Fill the Square)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

long n;
char a[11][11];

int check(long i,long j,long c){
    if(a[i][j-1]==c || a[i-1][j]==c || a[i+1][j]==c || a[i][j+1]==c)
        return 0;
    return 1;
    }

int main(){
    long test,i,j,c,flag,kase=0;
    cin>>test;
    while(test--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<"Case "<<++kase<<":"<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                flag=0;
                if(a[i][j]=='.'){
                    for(c=65;flag==0;c++){
                        if(check(i,j,c)){
                            a[i][j]=c;
                            flag=1;
                            }
                        }
                    }
                }
            }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j];
                }
            cout<<endl;
            }
        }
    return 0;
    }
