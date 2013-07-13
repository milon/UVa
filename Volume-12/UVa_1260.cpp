//UVa Problem-1260(Sales)
//Accepted
//Running time: 0.032 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int less=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            int l=0;
            for(int j=0;j<i;j++)
                l+=(arr[j]<=arr[i]);
            less+=l;
            }
        printf("%d\n",less);
        }
    return 0;
    }
