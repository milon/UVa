//UVa Problem-10190(Divide, But Not Quite Conquer!)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        if(n<2 || m<2 || m>n){
            cout<<"Boring!"<<endl;
            continue;
            }
        vector<int>output;
        bool boring=false;
        while(n>1){
            if(n%m==0)
                output.push_back(n);
            else
                boring=true;
            n/=m;
            }
        output.push_back(1);
        if(boring==true)
            cout<<"Boring!"<<endl;
        else{
            bool space=false;
            for(int i=0;i<output.size();i++){
                if(space)
                    cout<<" ";
                space=true;
                cout<<output[i];
                }
            cout<<endl;
            }
        }
    return 0;
    }
