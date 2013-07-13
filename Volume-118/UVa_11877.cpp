//UVa Problem-11877(The Coco-Cola Store)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        int full,output=0;
        while(n>1){
            if(n==2){
                output++;
                break;
                }
            full=n/3;
            output+=full;
            n -= n/3*3;
            n+=full;
            }
        cout<<output<<endl;
        }
    return 0;
    }
