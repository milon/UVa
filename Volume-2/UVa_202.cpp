//UVa Problem-202(Repeating Decimals)
//Accepted
//Running time: 0.016 sec
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
    string str;
    vector<int> array;
    int m,n,k,i;
    while(cin>>m>>n){
        cout<<m<<"/"<<n<<" = "<<m/n<<".";
        if((m==n) || (m==0)){
            cout<<"(0)\n   1 = number of digits in repeating cycle\n\n";
            continue;
            }
        m%=n;
        m*=10;
        array.clear();
        array.push_back(m);
        str.erase();
        for(i=2; ;i++){
            str.push_back(m/n+48);
            m%=n;
            if(m==0){
                cout<<str<<"(0)\n   1 = number of digits in repeating cycle\n\n";
                break;
                }
            m*=10;
            if(i<=n+1){
                k=search(array,m);
                if(k){
                    k=array.size()-k+1;
                    m=array.size()-k;
                    cout<<str.substr(0,m)<<"(";
                    if(k<=50)
                        cout<<str.substr(m, k)<<")\n   "<<k<<" = number of digits in repeating cycle\n\n";
                    else
                        cout<<str.substr(m,50)<<"...)\n   "<<k<<" = number of digits in repeating cycle\n\n";
                    break;
                    }
                }
            }
        }
    return 0;
    }
