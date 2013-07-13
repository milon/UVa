//UVa Problem-10401(Injured Queen Problem)
//Accepted
//Running time: 0.072 sec

#include<iostream>
#include<cctype>
#include<string>
using namespace std;

long long solve(int *a,int n){
    long long table[n][n];
    fill(&table[0][0],&table[n-1][n],0LL);
    if(a[0]==-1){
        for(int i=0;i<n;i++)
            table[i][0]=1LL;
        }
    else
        table[a[0]][0]=1LL;
    for(int i=1;i<n;i++){
        if(a[i]==-1){
            for(int j=0;j<n;j++){
                for(int k=0;k<j-1;k++)
                    table[j][i]+=table[k][i-1];
                for(int k=j+2;k<n;k++)
                    table[j][i]+=table[k][i-1];
                }
            }
        else{
            for(int j=0;j<a[i]-1;j++)
                table[a[i]][i]+=table[j][i-1];
            for(int j=a[i]+2;j<n;j++)
                table[a[i]][i]+=table[j][i-1];
            }
        }
    long long sum=0;
    for(int i=0;i<n;i++)
        sum+=table[i][n-1];
    return sum;
    }

int main(){
    string t;
    while(cin>>t){
        int a[t.size()];
        for(int i=0;i<t.size();i++){
            if(t[i]=='?')
                a[i]=-1;
            else if(isdigit(t[i]))
                a[i]=t[i]-'0'-1;
            else
                a[i]=t[i]-'A'+9;
            }
        cout<<solve(a,t.size())<<endl;
        }
    return 0;
    }
