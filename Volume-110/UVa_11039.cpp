//UVa Problem-11039(Building designing)
//Accepted
//Running time: 0.152 sec

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int input;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++){
            cin>>input;
            if(input>0)
                pos.push_back(input);
            else
                neg.push_back(input*-1);
            }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        int current,count=0;
        if(pos.back()>neg.back()){
            current=pos.back();
            pos.pop_back();
            }
        else{
            current=neg.back()*-1;
            neg.pop_back();
            }
        count++;
        while(pos.size() && neg.size()){
            if(current<0){
                while(pos.size()){
                    if(pos.back()<current*-1){
                        current=pos.back();
                        count++;
                        break;
                        }
                    pos.pop_back();
                    }
                }
            else{
                while(neg.size()){
                    if(neg.back()<current){
                        current=neg.back()*-1;
                        count++;
                        break;
                        }
                    neg.pop_back();
                    }
                }
            }
        cout<<count<<endl;
        }
    return 0;
    }
