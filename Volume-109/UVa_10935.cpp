//UVa Problem-10935(Throwing cards away I)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,dec[55],p,r,x,c;
    while(cin>>n && n){
        if(n==1)
            cout<<"Discarded cards:\nRemaining card: 1"<<endl;
        else{
            cout<<"Discarded cards: 1";
            for(int i=0;i<=n;i++)
                dec[i]=1;
            dec[1]=0;
            x=1; c=0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(dec[j]==1) c++;
                    if(x==n-1) break;
                    if(c==2){
                        dec[j]=0;
                        cout<<", "<<j;
                        c=0;
                        x++;
                        }
                    }
                }
            for(int i=1; ;i++){
                if(pow(2,i)>=n){
                    p=pow(2,i);
                    break;
                    }
                }
            int r=(long)p-(p-n)*2;
            cout<<"\nRemaining card: "<<r<<endl;
            }
        }
    return 0;
    }
