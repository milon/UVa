//UVa Problem-948(Fibonaccimal Base)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<algorithm>
using namespace std;

int ar[50], in=0;
bool found;

void fibo(){
    int a=0,b=1,c=1;
    in=0;
    while(c<=100000000){
        ar[in++]=c;
        a=b;
        b=c;
        c=a+b;
        }
    }

void print(long long m){
    string str="";
    while(m){
        str+=(m%2)+'0';
        m/=2;
        }
    reverse(str.begin(),str.end());
    cout<<str<<" (fib)"<<endl;
    }

void recurtion(int at,int num, long long mask){
    if(num==0){
        print(mask);
        found=true;
        return;
        }
    if(num<0 || found)
        return;
    for(int i=at-2;i>=0;i--){
        recurtion(i,num-ar[i],mask|(long long)1<<i);
        }
    }

int main(){
    fibo();
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        cout<<n<<" = ";
        found=false;
        recurtion(in+1,n,0);
        }
    return 0;
    }
