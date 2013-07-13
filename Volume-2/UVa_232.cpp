//UVa Problem-232(Crossword Answers)
//Accepted
//Running time: 0.144 sec
//Author: Milon

#include<iostream>
#include<string>
using namespace std;

char a[15][15];
int num[15][15];
int r,c;

void print_across(){
    cout<<"Across"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(num[i][j]){
                printf("%3d.",num[i][j]);
                while(j!=c && a[i][j]!='*')
                    cout<<a[i][j++];
                cout<<endl;
                }
            }
        }
    }

void print_down(){
    cout<<"Down"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(num[i][j]){
                int tmp=i;
                printf("%3d.",num[i][j]);
                while(tmp!=r && a[tmp][j]!='*'){
                    cout<<a[tmp][j];
                    num[tmp++][j]=0;
                    }
                cout<<endl;
                }
            }
        }
    }

int main(){
    bool suru=false;
    int kase=0;
    while(cin>>r>>c && r){
        for(int i=0;i<r;i++)
            cin>>a[i];
        memset(num,0,sizeof(num));
        int n=1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]!='*'){
                    if(i==0 || j==0)
                        num[i][j]=n++;
                    else if(a[i][j-1]=='*' || a[i-1][j]=='*')
                        num[i][j]=n++;
                    }
                }
            }
        if(suru)
            cout<<endl;
        suru=true;
        cout<<"puzzle #"<<++kase<<":"<<endl;
        print_across();
        print_down();
        }
    return 0;
    }
