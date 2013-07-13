//UVa Problem-11349(Symmetric Matrix)
//Accepted
//Running time: 0.220 sec

#include<iostream>
using namespace std;

#define MAX 100


int main(){
    int in=0;
    int test;
    cin>>test;
    while(test--){
        char tmp[2];
        bool milon=false;
        int n;
        long long suru[MAX][MAX];
        cin>>tmp[1]>>tmp[2]>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>suru[i][j];
        cout<<"Test #"<< ++in <<": ";
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
                if((suru[i][j]<0) || (suru[i][j]!=suru[n-i-1][n-j-1]))
                    milon=true;
        if(milon)
            cout<<"Non-symmetric."<<endl;
        else
            cout<<"Symmetric."<<endl;
        }
    return 0;
    }
