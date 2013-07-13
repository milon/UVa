//UVa Problem-737(Gleaming the Cubes)
//Accepted
//Running time: 0.032 sec
//Author: Milon

#include<cstdio>
#include<algorithm>
using namespace std;

struct Point {
	int x,y,z;
};

int main(){
	Point a,b,c;
	int t,n;
	while(true){
		scanf("%d",&n);
		if(!n)
            break;
		scanf("%d %d %d %d",&a.x,&a.y,&a.z,&t);
		b.x=a.x+t;
		b.y=a.y+t;
		b.z=a.z+t;
		for(int i=0;i<n-1;i++){
            scanf("%d %d %d %d",&c.x,&c.y,&c.z,&t);
            a.x=max(c.x,a.x);
			a.y=max(c.y,a.y);
			a.z=max(c.z,a.z);
			b.x=min(c.x+t,b.x);
			b.y=min(c.y+t,b.y);
			b.z=min(c.z+t,b.z);
            }
		printf("%d\n",max((b.x-a.x)*(b.y-a.y)*(b.z-a.z),0));
        }
    return 0;
    }
