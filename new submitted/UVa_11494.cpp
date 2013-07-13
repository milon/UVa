//UVa Problem-11494(Queen)
//Accepted
//Running time: 0.028 sec
//

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    while(true){
        int i,j,u,v;
        cin>>i>>j>>u>>v;
        if(i==0&&j==0&&u==0&&v==0)
            break;
        cout<<((i==u&&j==v)?0:(i==u||j==v||abs(i-u)==abs(j-v))?1:2)<<endl;
        }
    return 0;
    }
