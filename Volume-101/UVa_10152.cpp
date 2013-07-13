//UVa Problem-10152(ShellSort)
//Accepted
//Running time: 0.440 sec

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> suru,milon;

int main(){
    string str;
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int j=0,k=n;
        getchar();
        while(k--){
            getline(cin,str);
            suru.push_back(str);
            }
        k=n;
        while(k--){
            getline(cin,str);
            milon.push_back(str);
            }
        int count=0;
        for(int i=n-1;i>=count;i--){
            if(suru[i-count]!=milon[i]){
                i++;
                count++;
                }
            }
        for(int i=count-1;i>=0;i--)
            cout<<milon[i]<<endl;
        cout<<endl;
        milon.clear();
        suru.clear();
        }
    return 0;
    }
