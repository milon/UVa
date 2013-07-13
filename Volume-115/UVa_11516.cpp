//UVa Problem-11516(WiFi)
//Accepted
//Running time: 0.065 sec

#include<cstdio>
#include<algorithm>
using namespace std;

int n,m;
int house_no[100000+10];

bool check(int mid){
    int used=1;
    int wifirange=house_no[0]+mid;
    for(int i=0;i<m;i++){
        if(house_no[i]>wifirange){
            wifirange=house_no[i]+mid;
            used++;
            }
        }
    return used<=n;
    }

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
            scanf("%d",&house_no[i]);
        if(n>=m){
            printf("0.0\n");
            continue;
            }
        sort(house_no,house_no+m);
        int low=0;
        int high=1000000;
        while(high-low>1){
            int mid=(low+high)/2;
            if(check(mid*2))
                high=mid;
            else
                low=mid;
            }
        low*=10;
        high*=10;
        for(int i=0;i<m;i++)
            house_no[i]*=10;
        while(high-low>1){
            int mid=(low+high)/2;
            if(check(mid*2))
                high=mid;
            else
                low=mid;
            }
        printf("%d.%d\n",high/10,high%10);
        }
	return 0;
    }

