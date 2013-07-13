//UVa Problem-11240(Antimonotonicity)
//Accepted
//Running time: 0.244 sec

#include<iostream>
using namespace std;

int main(){
    int m,n,array[2],high,low;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>n;
        array[0]=0;
        high=0;
        low=0;
        for(int i=1;i<=n;i++){
            cin>>array[1];
            if(array[1]<array[0])
                low=high+1;
            else if(array[1]>array[0])
                high=low+1;
            array[0]=array[1];
            }
        cout<<((high>low)?high:low)<<endl;
        }
    return 0;
    }
