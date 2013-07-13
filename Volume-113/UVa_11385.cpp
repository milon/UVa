//UVa Problem-11385(Da Vinci Code)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<limits>
#include<string>
#include<map>
using namespace std;

int num[100];
long long fibo[100];
map<long long,int>map_fibo;

void generate_fibo(){
    fibo[0]=1;
    fibo[1]=2;
    map_fibo[1]=0;
    map_fibo[2]=1;
    for(int i=2;fibo[i-1]<INT_MAX;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
        map_fibo[fibo[i]]=i;
        }
    }

int main(){
    generate_fibo();
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>num[i];
            if(max<num[i])
                max=num[i];
            }
        getchar();
        char ch[100],output[100];
        gets(ch);
        memset(output,' ',sizeof(output));
        output[map_fibo[max]+1]=0;
        int len=0;
        for(int i=0;i<n;i++){
            while(!isupper(ch[len]))
                len++;
            output[map_fibo[num[i]]]=ch[len];
            len++;
            }
        cout<<output<<endl;
        }
    return 0;
    }
