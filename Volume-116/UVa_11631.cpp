//UVa Problem-11631(Dark roads)
//Accepted
//Running time: 0.452 sec

#include<cstdio>
#include<algorithm>
using namespace std;

struct node{
    int start;
    int end;
    int dist;
    }suru[200000+10];

int parent[200000+10];
int size[200000+10];

bool cmp(node x,node y){
    if(x.dist<y.dist)
        return true;
    return false;
    }

int findParent(int n){
    if(parent[n]==n)
        return n;
    return parent[n]=findParent(parent[n]);
    }

int main(){
    int m,n;
    while(scanf("%d %d",&m,&n)){
        if(m==0 && n==0)
            break;
        int totalDist=0;
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
            scanf("%d %d %d",&suru[i].start,&suru[i].end,&suru[i].dist);
            totalDist+=suru[i].dist;
            }
        parent[n]=n;
        size[n]=1;
        sort(suru,suru+n,cmp);
        int selected=m-1;
        int countDist=0;
        for(int i=0;i<n && selected;i++){
            int p=findParent(suru [i].start);
            int q=findParent(suru [i].end);
            if(p!=q){
                if(size[p]>size[q])
                    swap(p,q);
                size[q]+=size[p];
                parent[p]=q;
                countDist+=suru[i].dist;
                selected--;
                }
            }
        printf("%d\n",totalDist-countDist);
        }
    return 0;
    }

