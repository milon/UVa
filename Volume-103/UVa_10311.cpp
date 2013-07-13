//UVa problem-11311(Goldbach and Euler)
//Accepted
//Running time: 3.476 sec

#include<iostream>
using namespace std;

#define N 50000001

bool a[N];
int b[3001136];

int generate(){
    for(int i=0;i<N;i++)
        a[i]=i%2;
    a[2]=1;
    a[0]=0;
    for(int i=3;i*i<= N;i+=2){
        if(a[i])
            for(int j=2*i;j<N;j+=i)
                a[j]=false;
        }
    int index = 0;
    b[index++]=2;
    for(int i=3;i<N;i+=2)
        if(a[i])
            b[index++]=i;
    return index;
    }

bool is_prime(int index,int n){
    if ( n <=1 )
        return false;
    for(int i=0;i<index && b[i]*b[i]<=n;i++){
        if(n%b[i] == 0)
            return false;
        }
    return true;
    }

int find_index(int n,int index){
    int l=0,r=index,ret;
    if(n > b[index-1])
        return index-1;
    while(l <=r ){
        int mid = (r+l)/2;
        if(b[mid] <n){
            ret = mid;
            l=mid+1;
            }
        else if(b[mid]>n){
            r=mid-1;
            }
        else if(b[mid] ==n)
            return mid;
        }
    return ret;
    }

int main(){
    int index = generate(),n;
    while(cin>>n && n){
        if(n %2 == 1||n==2){
            int tmp = n-2;
            if(is_prime(index,tmp)==false)
                cout << n<<" is not the sum of two primes!"<<endl;
            else if(2<tmp)
                cout << n <<" is the sum of "<<2<<" and "<<tmp<<"."<<endl;
            else
                cout << n <<" is the sum of "<<tmp<<" and "<<2<<"."<<endl;
            }
        else{
            int start_index=find_index(n/2,index);
            bool flag=false;
            for(int i=start_index;i>=0;i--){
                int tmp = n-b[i];
                if(tmp-b[i]<=0)
                    continue;
                if(tmp >= N){
                    if(is_prime(index,tmp)){
                        cout << n <<" is the sum of "<<b[i]<<" and "<<tmp<<"."<<endl;
                        flag=true;
                        break;
                        }
                    }
                else if(a[tmp] == true){
                    cout << n <<" is the sum of "<<b[i]<<" and "<<tmp<<"."<<endl;
                    flag = true;
                    break;
                    }
                }
            if(flag==false)
                cout << n<<" is not the sum of two primes!"<<endl;
            }
        }
    return 0;
    }
