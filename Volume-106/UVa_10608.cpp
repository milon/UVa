//UVa Problem-10608(Friends)
//Accepted
//Running time: 0.108 sec

#include<iostream>
using namespace std;

#define max 30001

int parent[max],rank[max];

void make_set(int x){
	parent[x]=x;
	rank[x]=0;
	}

int find_set(int x){
	if(x!=parent[x])
		parent[x]=find_set(parent[x]);
	return parent[x];
	}

void union_set(int x,int y){
	int a=find_set(x);
	int b=find_set(y);
	if(rank[a]>rank[b])
		parent[b]=a;
	else
		parent[a]=b;
	if(rank[a]==rank[b])
		rank[b]=rank[b]+1;
	}

int main(){
	int t,n,m,a,b;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int j=1;j<=n;j++)
			make_set(j);
		for(int j=0;j<m;j++){
			cin>>a>>b;
			union_set(a,b);
			}
		int set[n+1];
		for(int j=1;j<=n;j++)
			set[j]=0;
		for(int j=1;j<=n;j++)
			set[find_set(j)]++;
		int maximum=0;
		for(int j=1;j<=n;j++){
			if(set[j]>maximum)
				maximum=set[j];
			}
		cout<<maximum<<endl;
		}
	return 0;
	}
