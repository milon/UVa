//UVa Problem-825(Walking on the Safe Side)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<string>
using namespace std;

#define N 100

int map[N+1][N+1];

int main(){
    int cases;
    cin>>cases;
    for(int counter=0;counter<cases;counter++){
        if(counter)
            cout<<endl;
        int w,n;
        cin>>w>>n;
        for(int i=1;i<=w;i++)
            for(int j=1;j<=n;j++)
                map[i][j]=1;
        string str;
        for(int i=1,p;i<=w;i++){
            cin>>p;
            getline(cin,str,'\n');
            if((str.length()>0) && (str[0]==' '))
                str.erase(str.begin(),str.begin()+1);
            str.push_back(' ');
            for(int j=0,q=0;j<str.length();j++){
                if(isdigit(str[j]))
                    q=q*10+str[j]-'0';
                else{
                    map[p][q]=0;
                    q=0;
                    }
                }
            }
        for(int i=0;i<=w;i++)
            map[i][0]=0;
        for(int j=2;j<=n;j++)
            map[0][j]=0;
        map[0][1]=1;
        for(int i=1;i<=w;i++)
            for(int j=1;j<=n;j++)
                if(map[i][j]>0)
                    map[i][j]=map[i-1][j]+map[i][j-1];
        cout<<map[w][n]<<endl;
        }
    return 0;
    }


