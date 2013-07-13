//UVa Problem-10057(A min-summer night’s dream)
//Accepted
//Running time: 0.392 sec

#include<cstdio>
#include<algorithm>
using namespace std;

int ar[1000002];

int compare_ints(const void* a, const void* b){
    int* arg1=(int*)a;
    int* arg2=(int*)b;
    if(*arg1<*arg2)
        return -1;
    else if(*arg1==*arg2)
        return 0;
    else
        return 1;
	}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        for(int i=0;i<n;i++)
            scanf("%d",&ar[i]);
        qsort(ar,n,sizeof(int),compare_ints);
        if(n%2==0){
            printf("%d ",ar[n/2-1]);
            int c=0;
            for(int i=n/2-1;i>=0;i--){
                if(ar[i]==ar[n/2-1])
                    c++;
                else
                    break;
				}
            for(int i=n/2;i<n;i++){
                if(ar[i]==ar[n/2])
                    c++;
                else
                    break;
				}
            printf("%d %d\n",c,ar[n/2]-ar[n/2-1]+1);
			}
        else{
            printf("%d ",ar[n/2]);
            int c=0;
            for(int i=n/2;i>=0;i--){
                if(ar[i]==ar[n/2])
                    c++;
                else
                    break;
				}
            for(int i=n/2+1;i<n;i++){
                if(ar[i]==ar[n/2])
                    c++;
                else
                    break;
				}
            printf("%d %d\n",c,1);
			}
		}
    return 0;
	}
