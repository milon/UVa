//UVa Problem-507(Jill Rides Again)
//Accepted
//Running time: 0.128 sec
//Author: Milon

#include<cstdio>
using namespace std;

#define MAXN 20010

int test,n,route[MAXN]={0},ans[MAXN]={0};
int right,left,maxval,ml,mr;
bool neg;

int main(){
    scanf("%d",&test);
    for(int kase=1;kase<=test;kase++){
        scanf("%d",&n);
        neg=true;
        for(int i=1;i<n;i++){
            scanf("%d",&route[i]);
            if(route[i]>=0)
                neg=false;
            }
        if(!neg){
            maxval=ans[1]=route[1];
            ml=mr=0;
            for(int i=2;i<n;i++){
                if(ans[i-1]+route[i]>route[i])
                    ans[i]=ans[i-1]+route[i];
                else
                    ans[i]=route[i];
                if(maxval<=ans[i]){
                    maxval=ans[i];
                    right=i;
                    }
                }
            left=0;
            right=1;
            for(int i=1;i<n;i++)
                if(ans[i]>=0){
                    if(!left)
                        left=i;
                    if(ans[i]==maxval){
                        right=i;
                        if(!ml||!mr){
                            ml=left;
                            mr=right;
                            }
                        else{
                            if(right-left>mr-ml){
                                ml=left;
                                mr=right;
                                }
                            }
                        }
                    }
                else
                    left=0;
                printf("The nicest part of route %d is between stops %d and %d\n",kase,ml,mr+1);
                }
        else printf("Route %d has no nice parts\n",kase);
        }
    return 0;
    }
