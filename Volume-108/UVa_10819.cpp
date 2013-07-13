//UVa Problem-10819(Trouble of 13-Dots)
//Accepted
//Running time: 0.196 sec

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define MAX 150

int c[MAX*150],p[MAX+MAX],v[MAX+MAX];

int main(){
    int n,budget,ans;
    while(cin>>budget>>n){
        for(int i=1;i<=n;i++)
            cin>>p[i]>>v[i];
        memset(c,0,sizeof(c));
        for(int i=1;i<=n;i++){
            for(int j=10200;j>=p[i];j--){
                if(j==p[i])
                    c[j]=max(c[j],(c[j-p[i]]+v[i]));
                else if(j>p[i] && c[j-p[i]]!=0)
                    c[j]=max(c[j],c[j-p[i]]+v[i]);
                }
            }
        ans=0;
        for(int i=0;i<=10200;i++){
            if((i>2000 && i<=budget+200) || i<=budget){
                ans=ans>c[i]?ans:c[i];
                }
            }
        cout<<ans<<endl;
        }
    return 0;
    }
