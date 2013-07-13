//UVa Problem-11991(Easy Problem from Rujia Liu?)
//Accepted
//Running time: 0.212 sec
//Author: Milon

#include<cstdio>
#include<vector>
using namespace std;

#define N 1000005

vector<int> res[N];

int main(){
	int n,m;
	int a[N];
	while(scanf("%d %d",&n,&m)!=EOF){
		for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
		for(int i=0;i<N;i++)
            res[i].clear();
		for(int i=0;i<n;i++)
            res[a[i]].push_back(i+1);
		int k,v;
		for(int i=0;i<m;i++){
			scanf("%d %d",&k,&v);
			if(res[v].size()<k)
                printf("0\n");
			else
                printf("%d\n",res[v][k-1]);
            }
        }
    return 0;
    }
