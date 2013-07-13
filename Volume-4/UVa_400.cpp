//UVa Problem-400(Unix ls)
//Accepted
//Running time: 0.044 sec

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

string suru[100+5];

int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>suru[i];
        sort(suru,suru+n);
        int maxLen=0;
        for(int i=0;i<n;i++){
            int len=suru[i].length();
            if(len>maxLen)
                maxLen=len;
            }
        int totalColumn=62/(maxLen+2);
        int justified=maxLen+2;
        int row=ceil(n/(double)totalColumn);
        cout<<"------------------------------------------------------------"<<endl;
        for(int i=0;i<row;i++){
            for(int j=i;j<n;j+=row){
                cout<<suru[j];
                if(j+row<n){
                    for(int k=suru[j].length();k<justified;k++)
                        cout<<" ";
                    }
                }
            cout<<endl;
            }
        }
	return 0;
    }

