//UVa Problem-541(Error Correction)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<iostream>
using namespace std;

#define MAX 100

int n,a[MAX][MAX];

int row(){
    int sum=0,cnt=0,i,j,p;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n;j++)
            sum+=a[i][j];
        if((sum%2)!=0){
            cnt++;
            p=i;
            }
        if(cnt>=2)
            return -1;
        }
    if(cnt==1)
        return p;
    return -2;
    }

int col(){
    int sum2=0,cnt=0,i,j,p;
    for(i=0;i<n;i++){
        sum2=0;
        for(j=0;j<n;j++)
            sum2+=a[j][i];
        if((sum2%2)!=0){
            cnt++;
            p=i;
            }
        if(cnt>=2)
            return -1;
        }
    if(cnt==1)
        return p;
    return -2;
    }

int main(){
    int i,j,k,l;
    while((scanf("%d",&n))==1 && n!=0){
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        k=row();
        l=col();
        if(k==-1 || l==-1)
            cout<<"Corrupt"<<endl;
        else if(k==-2 && l==-2)
            cout<<"OK"<<endl;
        else
            printf("Change bit (%d,%d)\n",k+1,l+1);
        }
    return 0;
    }
