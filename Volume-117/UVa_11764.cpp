//UVa Problem-11764(Jumping Mario)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
    int t,high,low,n,wall[100];
    cin>>t;
    int i=0;
    while(t--){
        cin>>n;
        high=low=0;
        for(int j=1;j<=n;j++)
            cin>>wall[j];
        for(int j=1;j<n;j++){
            if(wall[j+1]>wall[j])
                high++;
            if(wall[j+1]<wall[j])
                low++;
            }
        cout<<"Case "<<++i<<": "<<high<<" "<<low<<endl;
        }
    return 0;
    }
