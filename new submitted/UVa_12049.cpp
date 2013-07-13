//UVa Problem-12049(Just Prune The List)
//Accepted
//Running time: 0.240 sec

#include<map>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int test;
	scanf("%d", &test);
	while(test--){
		int m,n,l;
		scanf("%d %d",&m,&n);
		map<int, int> Map;
		map<int, int>::iterator it;
		for(int i = 0;i<m;i++){
			scanf("%d",&l);
			Map[l]+=1;
            }
		for(int i=0;i<n;i++){
			scanf("%d",&l);
			Map[l]-=1;
            }
		int tot=0;
		for(it=Map.begin();it!=Map.end();it++)
			tot+=abs((*it).second);
		printf("%d\n",tot);
        }
	return 0;
    }
