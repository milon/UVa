//UVa Problem-12239(Bingo!)
//Accepted
//Running time: 0.424 sec

#include<set>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    while(true){
        int n,b;
        scanf("%d %d",&n,&b);
        if(!n && !b)
            break;
        set<int> Set;
        int arr[b];
        for(int i=0;i<b;i++)
            scanf("%d",&arr[i]);
        for(int i=0;i<b;i++)
            for(int j=i;j<b;j++){
                int t=(int)abs(arr[i]-arr[j]);
                if(t<=n)
                    Set.insert(t);
                }
            if(Set.size()==n+1)
                printf("Y\n");
            else
                printf("N\n");
        }
    return 0;
    }
