//UVa Problem-10849(Move the bishop)
//Accepted
//Running time: 0.048 sec

#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int dataset;
        cin>>dataset;
        int n;
        cin>>n;
        while(dataset--){
            int suru[4];
            bool no=false;
            for(int i=0;i<4;i++){
                cin>>suru[i];
                if(suru[i]<1 || suru[i]>n)
                    no=true;
                }
            if(no){
                cout<<"no move"<<endl;
                continue;
                }
            int diff1=abs(suru[0]-suru[2]);
            int diff2=abs(suru[1]-suru[3]);
            if(suru[0]==suru[2] && suru[1]==suru[3])
                cout<<"0"<<endl;
            else if(diff1==diff2)
                cout<<"1"<<endl;
            else if(diff1%2==0 && diff2%2==0)
                cout<<"2"<<endl;
            else if(diff1%2==1 && diff2%2==1)
                cout<<"2"<<endl;
            else
                cout<<"no move"<<endl;
            }
        }
    return 0;
    }
