//UVa Problem-275(Expanding Fractions)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &array,const int& n){
    for(int i=0;i<array.size();i++)
        if(n==array[i])
            return i+1;
    array.push_back(n);
    return 0;
    }

int main(){
    vector<int> array;
    int m,n,k,i;
    while(cin>>m>>n){
        if((m==0) && (n==0))
            break;
        cout<<".";
        if(m ==n){
            cout<<"\nThis expansion terminates.\n\n";
            continue;
            }
        if(m==0){
            cout<<"\nThis expansion terminates.\n\n";
            continue;
            }
        m*=10;
        array.clear();
        array.push_back(m);
        for(i=2; ;i++){
            cout<<m/n;
            m%=n;
            if(m==0){
                cout<<"\nThis expansion terminates.\n\n";
                break;
                }
            m*=10;
            if(i<=n+1){
                k=search(array,m);
                if(k){
                    cout<<"\nThe last "<<array.size()-k+1<<" digits repeat forever.\n\n";
                    break;
                    }
                }
            if(i%50==0)
                cout<<endl;
            }
        }
    return 0;
    }
