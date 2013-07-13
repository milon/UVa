//UVa Problem-12205(Happy Telephones)
//Accepted
//Running time: 0.064 sec
//Author: Milon

#include<cstdio>
using namespace std;

struct phone{
	int a,b;
    };

int main(){
	while(true){
		int n,m;
		scanf("%d%d",&n,&m);
		if(!n && !m)
            break;
		phone p[n];
		for(int i=0;i<n;i++){
			int u,v,w,x;
			scanf("%d%d%d%d",&u,&v,&w,&x);
			p[i].a=w;
			p[i].b=w+x;
            }
		while(m--){
			int x,y,c=0;
			scanf("%d%d",&x,&y);
			y+=x;
			for(int i=0;i<n;i++)
				c+=(x<p[i].b && y>p[i].a);
			printf("%d\n",c);
            }
        }
	return 0;
    }
