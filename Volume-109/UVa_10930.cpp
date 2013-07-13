//UVa Problem-10930(A-Sequence)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    int a[30+5];
    int suru[1000+10];
    int kase=0;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>a[i];
        memset(suru,0,sizeof(suru));
        suru[0]=1;
        for(int i=0;i<n;i++){
            for(int j=1000;j>=0;j--)
                if(suru[j] && j+a[i]<=1000)
                    suru[j+a[i]]++;
            }
        bool a_seq=true;
        if(a[0]<1)
            a_seq=false;
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1])
                a_seq=false;
            }
        for(int i=0;i<n;i++){
            if(suru[a[i]]>1)
                a_seq=false;
            }
        cout<<"Case #"<<++kase<<":";
        for(int i=0;i<n;i++)
            cout<<" "<<a[i];
        cout<<endl;
        if(a_seq)
            cout<<"This is an A-sequence."<<endl;
        else
            cout<<"This is not an A-sequence."<<endl;
        }
	return 0;
    }

