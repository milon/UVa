//UVa Problem-10954(Add All)
//Accepted
//Running time: 0.180 sec

#include<iostream>
#include<algorithm>
using namespace std;

#define max 5000

int main(){
    int array[max],num;
    long long sum=0;
    while(cin>>num && num){
        for(int i=1;i<num;i++){
            cin>>array[i];
            }
        sort(array,array+num);
        for(int i=1;i<num;i++){
            array[i]+=array[i-1];
            sum+=array[i];
            for(int j=i+1;j<num;j++){
                if(array[j]>array[j-1])
                    break;
                else{
                    swap(array[j],array[j-1]);
                    }
                }
            }
        cout<<sum<<endl;
        }
    return 0;
    }
