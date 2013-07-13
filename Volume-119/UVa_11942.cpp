//UVa Problem-11942(Lumberjack Sequencing)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test,suru[10],milon[10];
    cin>>test;
    cout<<"Lumberjacks:"<<endl;
    while(test--){
        bool mil=false;
        for(int i=0;i<10;i++){
            cin>>suru[i];
            milon[i]=suru[i];
            }
        sort(suru,suru+10);
        if(milon[0]>milon[1]){
            for(int i=9,j=0;i>=0;i--,j++)
                if(milon[i]!=suru[j]){
                    mil=true;
                    break;
                    }
            }
        else{
            for(int i=0;i<10;i++)
                if(milon[i]!=suru[i]){
                    mil=true;
                    break;
                    }
            }
        if(mil==true)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
        }
    return 0;
    }
