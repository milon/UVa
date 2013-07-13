//UVa Problem-10810(Ultra-QuickSort)
//Accepted
//Running time: 0.720 sec

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int input[500000];
unsigned long long swaps;

void merge(int p,int q,int r){
    int len1=q-p+1;
    int len2=r-q;
    vector<int>left,right;
    for(int i=0;i<len1;i++)
        left.push_back(input[p+i]);
    for(int i=0;i<len2;i++)
        right.push_back(input[q+i+1]);
    left.push_back(999999999+10);
    right.push_back(999999999+10);
    size_t x=0;
    size_t y=0;
    for(int k=p;k<=r;k++){
        if(left[x]<=right[y])
            input[k]=left[x++];
        else{
            input[k]=right[y++];
            swaps+=len1-x;
            }
        }
    }

void merge_sort(int p,int r){
    if(p<r){
        int q=(int)floor((p+r)/2.0);
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge(p,q,r);
        }
    }

int main(){
    int n;
    while(cin>>n && n){
        swaps=0;
        for(int i=0;i<n;i++)
            cin>>input[i];
        merge_sort(0,n-1);
        cout<<swaps<<endl;
        }
    return 0;
    }
