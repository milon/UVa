//UVa Problem-10074(Take the Land)
//Accepted
//Running time: 0.032 sec

#include<iostream>
using namespace std;

int matrix[100+5][100+5];

int main(){
    int m,n;
    while(cin>>m>>n && m && n){
        int input;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>input;
                matrix[i][j]=1-input;
                }
            }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++)
                if(matrix [i][j]==1)
                    matrix[i][j]=matrix[i-1][j]+1;
            }
        int maxi=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt=matrix[i][j];
                for(int k=j+1;k<n && matrix[i][j]<=matrix[i][k];k++)
                    cnt+=matrix[i][j];
                for(int k=j-1;k>=0 && matrix[i][j]<=matrix[i][k];k--)
                    cnt+=matrix[i][j];
                if(cnt>maxi)maxi=cnt;
                }
            }
        cout<<maxi<<endl;
        }
    return 0;
    }

