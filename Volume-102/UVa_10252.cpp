//UVa Problem-10252(Common Permutation)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string res="";
        int pa = 0, pb = 0;
        while (pa<a.size() && pb<b.size()) {
            if (a[pa] == b[pb]){
                res += a[pa];
                pa++;
                pb++;
                }
            else if (a[pa] > b[pb]){
                pb++;
                }
            else if (a[pa] < b[pb]){
                pa++;
                }
            }
        printf("%s\n", res.c_str());
        }
    return 0;
    }
