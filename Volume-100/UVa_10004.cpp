//UVa Problem-10004(Bicoloring)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstring>
using namespace std;

int map[210][210];
int arr[210];

int main(){
    int n;
    while(cin>>n && n){
        memset(arr,-1,sizeof(arr));
        memset(map,0,sizeof(map));
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            map[x][y]=1;
            }
        arr[0]=0;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map[i][j] && i!=j){
                    if(arr[j]!=-1 && arr[j]==arr[i]){
                        flag = 1;
                        break;
                        }
                    else
                        arr[j]=!arr[i];
                    }
                }
            if(flag)
                break;
            }
        if(flag)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
        }
    return 0;
    }
