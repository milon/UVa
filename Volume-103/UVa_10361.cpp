//UVa Problem-10361(Automatic Poetry)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<string>
using namespace std;

int test;
string suru,milon;

int main(){
    cin>>test;
    getchar();
    while(test--){
        getline(cin, suru);
        int p1 = suru.find_first_of('<');
        int p2 = suru.find_first_of('>');
        int p3 = suru.find_last_of('<');
        int p4 = suru.find_last_of('>');
        int p5 = suru.size();
        string s2 = suru.substr(p1+1, p2-p1-1);
        string s3 = suru.substr(p2+1, p3-p2-1);
        string s4 = suru.substr(p3+1, p4-p3-1);
        string s5 = suru.substr(p4+1, p5-p4-1);
        suru.erase(p4, 1);
        suru.erase(p3, 1);
        suru.erase(p2, 1);
        suru.erase(p1, 1);
        cout<<suru<<endl;
        getline(cin,milon);
        int p6 = milon.find_first_of("...");
        milon.erase(p6, 3);
        milon.insert(p6, s5);
        milon.insert(p6, s2);
        milon.insert(p6, s3);
        milon.insert(p6, s4);
        cout<<milon<<endl;
        }
    return 0;
    }
