//UVa Problem-10763(Foreign Exchange)
//Accepted
//Running time: 0.392 sec

#include<iostream>
using namespace std;

int main(){
    int n,to,from,ar[500001];
    while(cin>>n){
        if(n==0)
            break;
        memset(ar,0,1000);
        for(int i=0;i<n;i++){
            cin>>from>>to;
            ar[from]--;
            ar[to]++;
			}
        bool k=true;
        for(int i=1;i<=n;i++){
            if(ar[i]!=0){
                k=false;
                break;
				}
			}
        if(k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
		}
    return 0;
	}

