//UVa Problem-11321(Sort! Sort!! And Sort!!!)
//Accepted
//Running time: 0.508 sec

#include<iostream.h>
#include<algorithm>
using namespace std;

struct input{
    int num;
    int mod;
    }a[10000+10];

int n,m;

bool odd(int x){
    if(x<0) x*=-1;
    if(x%2) return true;
    return false;
    }

bool even(int x){
    if(x<0) x*=-1;
    if(x%2) return false;
    return true;
    }

bool operator <(input a,input b){
    if(a.mod<b.mod) return true;
    if(a.mod==b.mod){
        if(odd(a.num) && even(b.num)) return true;
        if(odd(a.num) && odd(b.num) && a.num>b.num) return true;
        if(even(a.num) && even(b.num) && a.num<b.num) return true;
        }
    return false;
    }

int main(){
    while(cin>>n>>m){
        if(n==0 && m==0){
            cout<<"0 0"<<endl;
            break;
            }
        cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i].num;
            a[i].mod=a[i].num%m;
            }
        sort(a,a+n);
        for(int i=0;i<n;i++)
            cout<<a[i].num<<endl;
        }
    return 0;
    }
