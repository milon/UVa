//UVa Problem-750(8 Queens Chess Problem)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char sol[100][10];
char temp[10];
bool row[10];
bool rightDiag[20];
bool leftDiag[20];
int length;

void generateSolution(int n){
    if(n==8){
        temp[8]=0;
        strcpy(sol[length],temp);
        length++;
        return;
        }
    for(int i=0;i<8;i++){     // row
        if(row[i] && rightDiag[n-i+8] && leftDiag[n+i]){
            row[i]=rightDiag[n-i+8]=leftDiag[n+i]=false;
            temp[n]=i+'1';
            generateSolution(n+1);
            row[i]=rightDiag[n-i+8]=leftDiag[n+i]=true;
            }
        }
    }

int main(){
    memset(row,true,sizeof(row));
    memset(rightDiag,true,sizeof(rightDiag));
    memset(leftDiag,true,sizeof(leftDiag));
    length=0;
    generateSolution(0);
    int test;
    cin>>test;
    bool blank=false;
    while(test--){
        int r,c;
        cin>>r>>c;
        int kase=0;
        if(blank)
            cout<<endl;
        blank=true;
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8\n"<<endl;
        for(int i=0;i<length;i++){
            if(sol[i][c-1]==r+'0'){
                printf("%2d      ",++kase);
                printf("%c",sol[i][0]);
                for(int j=1;j<8;j++)
                    printf(" %c",sol[i][j]);
                printf("\n");
                }
            }
        }
    return 0;
    }
