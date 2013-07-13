//UVa Problem-414(Machined Surfaces)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        string str;
        int count=0,local=-1;
        for(int i=0;i<n;i++){
            getchar();
            int cnt=0;
            getline(cin,str);
            for(int j=0;j<str.size();j++)
                cnt+=(str[j]==' '?1:0);
            count+=cnt;
            local=((local>cnt || local== -1)?cnt:local);
            }
        cout<<count-n*local<<endl;
        }
    return 0;
    }
