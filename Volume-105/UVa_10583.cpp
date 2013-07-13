//UVa Problem-10583(Ubiquitous Religions)
//Accepted
//Running time: 0.556 sec

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int parent[50001],rank[50001];

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
	int n,m,a,b,index=1;
	while(cin>>n>>m){
		if(n==0 && m==0)
			break;
		for(int i=1;i<=n;i++)
			make_set(i);
		for(int i=0;i<m;i++){
			cin>>a>>b;
			union_set(a,b);
			}
		vector<int>v;
		vector<int>::iterator result;
		for(int i=1;i<=n;i++){
			result=find(v.begin(),v.end(),find_set(i));
			if(result==v.end())
				v.push_back(parent[i]);
			}
		cout<<"Case "<<index++<<": "<<v.size()<<endl;
		}
	return 0;
	}
