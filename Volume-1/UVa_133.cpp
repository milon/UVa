//UVa Problem-133(The Dole Queue)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<deque>
using namespace std;

const int array[20]={ 1, 2, 3, 4, 5, 6, 7, 8, 9,10,
                     11,12,13,14,15,16,17,18,19,20};

int mod(int k, int n){
    int r=k%n;
    return ((r>=0)?r:(r+n));
    }

int main(){
    deque<int> dq;
    int n,k,m;
    while(cin>>n>>k>>m){
        if((n==0) && (k==0) && (m==0))
            break;
        dq.resize(n);
        copy(array,array+n,dq.begin());
        int p[2]={0,n-1};
        while(true){
            p[0]=mod(p[0]+k-1,n),
            p[1]=mod(p[1]-m+1,n);
            if(p[0]==p[1]){
                printf("%3d",dq[p[0]]);
                dq.erase(dq.begin()+p[0],dq.begin()+p[0]+1);
                n--;
                p[1]--;
                }
            else{
                printf("%3d%3d",dq[p[0]],dq[p[1]]);
                if(p[0]<p[1]){
                    dq.erase(dq.begin()+p[0],dq.begin()+p[0]+1),
                    dq.erase(dq.begin()+p[1]-1,dq.begin()+p[1]);
                    p[1]-=2;
                    }
                else{
                    dq.erase(dq.begin()+p[1],dq.begin()+p[1]+1),
                    dq.erase(dq.begin()+p[0]-1,dq.begin()+p[0]);
                    p[0]--;
                    p[1]--;
                    }
                n-=2;
                }
            if(n>0)
                cout<<",";
            else
                break;
            }
        cout<<endl;
        }
    return 0;
    }
