//UVa Problem-11297(Census)
//Accepted
//Running time: 5.712

#include<iostream>
using namespace std;

int main(){
    int n,array[501][501],q,qs[4],max,min;
    char qo;
    while(cin>>n>>n){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>array[i][j];
        cin>>q;
        for(int k=0;k<q;k++){
            cin>>qo;
            if(qo=='q'){
                cin>>qs[0]>>qs[1]>>qs[2]>>qs[3];
                max = INT_MIN;
                min = INT_MAX;
                for(int i=qs[0];i<=qs[2];i++){
                    for(int j=qs[1];j<=qs[3];j++){
                        if(array[i][j]>max)
                            max=array[i][j];
                        if(array[i][j]<min)
                            min=array[i][j];
                        }
                    }
                cout<<max<<' '<<min<<endl;
                }
            else{
                cin>>qs[0]>>qs[1]>>qs[2];
                array[qs[0]][qs[1]]=qs[2];
                }
            }
        }
    return 0;
    }
