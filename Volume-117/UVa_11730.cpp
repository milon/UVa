//UVa Problem-11730(Number Transformation)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

#define N 1000000

bool mark[N];
vector<int> primeList;
vector<int> factors[1000+10];

void sieve(){
	memset(mark,true,sizeof(mark));
	mark[0]=mark[1]=false;
	for(int i=4;i<N;i+=2)
        mark[i]=false;
	for(int i=3;i*i<=N;i+=2){
		if(mark[i]){
			for(int j=i*i;j<N;j+=2*i)
                mark[j]=false;
            }
        }
	primeList.clear();
	primeList.push_back(2);
	for(int i=3;i<N;i+=2){
		if(mark[i])
            primeList.push_back(i);
        }
    }

void findFactors(){
	for(int i=0;i<1010;i++)
        factors[i].clear();
	vector<int>::iterator it;
	for(int i=0;i<1010;i++){
		int index=0;
		int tmp_i=i;
		while(primeList[index]*primeList[index]<=i){
			while(tmp_i%primeList[index]==0){
				factors[i].push_back(primeList[index]);
				tmp_i/=primeList[index];
                }
			index++;
            }
		if(tmp_i>1)
            factors[i].push_back(tmp_i);
		it=unique(factors[i].begin(),factors[i].end());
		factors[i].resize(it-factors[i].begin());
        }
    }

int minimumTransform(int s,int t){
	queue<pair<int,int> > q;
	q.push(make_pair(s,0));
	bool freq[1000+10];
	memset(freq,false,sizeof(freq));
	while(!q.empty()){
		pair<int, int> p=q.front();
		q.pop();
		if(p.first==t)
            return p.second;
		if(freq[p.first])
            continue;
		freq[p.first]=true;
		for(size_t i=0;i<factors[p.first].size();i++){
			int sum=p.first+factors[p.first].at(i);
			if(sum<=t && factors[p.first].at(i)!=p.first)
                q.push(make_pair(sum,p.second+1));
            }
        }
	return -1;
    }

int main(){
	sieve();
	findFactors();
	int s,t;
	int cases=0;
	while(scanf("%d %d",&s,&t)){
		if(s==0 && t==0)
            break;
		printf("Case %d: %d\n",++cases,minimumTransform(s,t));
        }
	return 0;
    }

