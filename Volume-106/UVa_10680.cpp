//UVa Problem-10680(LCM)
//Accepted
//Running time: 0.292 sec

#include<iostream>
using namespace std;

const int N=1000001;
bool a[N];
int b[N];

int lcm(int a,int b){
    return a/__gcd(a,b)*b;
    }

int generate(){
    for(int i=1;i<N;i+=2)
        a[i]=i%2;
    for(int i=3;i*i<=N;i+=2){
        if(a[i]){
            for(int j=2*i;j<N;j+=i)
                a[j]=false;
            }
        }
    int index=0;
    b[index++]=2;
    for(int i=3;i<N;i+=2)
        if(a[i])
            b[index++]=i;
    swap(b[1],b[2]);
    return index;
    }

int main(){
    int index=generate();
    long long n;
    while(cin>>n && n){
        int ans=1;
        int cnt2=0,cnt5=0;
        for(int i=2;i<=n;i*=2)
            cnt2++;
        for(int i=5;i<=n;i*=5)
            cnt5++;
        if(cnt2<cnt5){
            for(int i=0;i<cnt5-cnt2;i++){
                ans*=5;
                ans%=10;
                }
            }
        else if(cnt2>cnt5){
            for(int i=0;i<cnt2-cnt5;i++){
                ans*=2;
                ans%=10;
                }
            }
        for(int i=2;i<index;i++){
            if(b[i]>n)
                break;
            for(long long j=b[i];j<=n;j*=b[i]){
                ans*=b[i];
                ans%=10;
                }
            }
        cout<<ans<<endl;
        }
    return 0;
    }
