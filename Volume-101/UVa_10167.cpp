//UVa Problem-10167(Birthday Cake)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

#define max 105

int x[max],y[max];

int main(){
    int n;
    while(cin>>n && n){
        for(int i=0;i<n+n;i++)
            cin>>x[i]>>y[i];
        for(int i=-500;i<501;i++){
            bool suru=false;
            for(int j=-500;j<501;j++){
                int count1=0,count2=0;
                for(int k=0;k<n+n;k++){
                    int temp=x[k]*i+y[k]*j;
                    if(temp>0)
                        count1++;
                    else if(temp<0)
                        count2++;
                    }
                if(count1==count2 && count1==n){
                    suru=true;
                    cout<<i<<" "<<j<<endl;
                    break;
                    }
                }
            if(suru)
                break;
            }
        }
    return 0;
    }
