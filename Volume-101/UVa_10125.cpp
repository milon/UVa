//UVa Problem-10125(Sumsets)
//Accepted
//Running time: 2.184 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[1005],n;
    while(cin>>n && n){
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        bool suru=true;
        for(int i=n-1;i&&suru;i--){
            for(int j=0;j<n&&suru;j++){
                if(j==i)
                    continue;
                for(int k=0;k<n&&suru;k++){
                    if(k==j || k==i)
                        continue;
                    for(int l=0;l<n&&suru;l++){
                        if(l==i || l==j || l==k)
                            continue;
                        if(a[i]==a[j]+a[k]+a[l]){
                            suru=false;
                            cout<<a[i]<<endl;
                            }
                        }
                    }
                }
            }
        if(suru)
            cout<<"no solution"<<endl;
        }
    return 0;
    }
