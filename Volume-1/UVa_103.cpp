//UVa Problem-103(Stacking Boxes)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

struct node{
    int id;
    int d[12];
    }suru[32];

int k;
int n;
int best[32];
int parent[32];
vector<int> v;

bool cmp(int x,int y){
    for(int i=0;i<n;i++){
        if(suru[x].d[i]<=suru[y].d[i])
            return false;
        }
    return true;
    }

void print_path(int x){
    if(x==parent[x])
        return;
    print_path(parent[x]);
    v.push_back(suru[parent[x]].id);
    }

int lis(){
    for(int i=0;i<k;i++){
        best[i]=1;
        parent[i]=i;
        }
    for(int i=1;i<k;i++){
        for(int j=0;j<i;j++){
            if(cmp(i,j) && best[i]<best[j]+1){
                best[i]=best[j]+1;
                parent[i]=j;
                }
            }
        }
    int index;
    int max=0;
    for(int i=0;i<k;i++){
        if(max<best[i]){
            max=best[i];
            index=i;
            }
        }
    print_path(index);
    v.push_back(suru[index].id);
    return max;
    }

int main(){
    while(scanf("%i %i",&k,&n)!=EOF){
        v.clear();
        for(int i=0;i<k;i++){
            suru[i].id=i+1;
            for(int j=0;j<n;j++)
                scanf("%d",&suru[i].d[j]);
            sort(suru[i].d,suru[i].d+n);
            }
        // bubble sort
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(cmp(i,j))
                    swap(suru[i],suru[j]);
                }
            }
        printf("%d\n",lis());
        for(unsigned int i=0;i<v.size();i++){
            if(i!=0)
                printf(" ");
            printf("%d",v.at(i));
            }
        printf("\n");
        }
    return 0;
    }
