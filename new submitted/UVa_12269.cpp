//UVa Problem-12269(Lawn mower)
//Accepted
//Running time: 0.020 sec
//

#include<algorithm>
#include<cstdio>
using namespace std;

bool test(double w,int max,int n){
	double v[n];
	for(int i=0;i<n;i++)
		scanf("%lf",&v[i]);
	sort(v,v+n);
	bool ok=(v[0]<=w/2)&&((max-v[n-1])<=w/2);
	for(int i=0;i<n-1&&ok;i++){
		if(v[i+1]-v[i]>w)
            ok=false;
        }
	return ok;
    }

int main(){
	int n1,n2;
	double w;
	while(scanf("%d%d%lf",&n1,&n2,&w),w>0){
		bool x=test(w,75,n1);
		bool y=test(w,100,n2);
		printf("%s\n",x&&y?"YES":"NO");
        }
	return 0;
    }
