//UVa Problem-11063(B2-Sequence)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<map>
using namespace std;

int main(){
    int kase=0;
    int n;
    int a[102];
    while(cin>>n){
        for(int i=0;i<n;i++ )
            cin>>a[i];
        bool suru=true;
        for(int i=0;i<n-1;i++){
            if(a[i]<1 || a[i]>=a[i+1]){
                suru=false;
                i=n;
                }
            }
        if(suru){
            map<int,int> m;
            m.clear();
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    if(m[a[i]+a[j]]==1){
                        suru=false;
                        i=j=n;
                        }
                    else
                        m[a[i]+a[j]]=1;
                    }
                }
            if(suru)
                cout<<"Case #"<<++kase<<": It is a B2-Sequence."<<endl<<endl;
            else
                cout<<"Case #"<<++kase<<": It is not a B2-Sequence."<<endl<<endl;
            }
        else
            cout<<"Case #"<<++kase<<": It is not a B2-Sequence."<<endl<<endl;
        }
    return 0;
    }
