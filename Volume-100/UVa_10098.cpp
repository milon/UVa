//UVa Problem-10098(Generating Fast, Sorted Permutation)
//Accepted
//Running time: 0.744 sec

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        char ch[10];
        cin>>ch;
        int len=strlen(ch);
        sort(ch,ch+len);
        do{
            for(int i=0;i<len;i++)
                cout<<ch[i];
            cout<<endl;
            }while(next_permutation(ch,ch+len));
        cout<<endl;
        }
    return 0;
    }
