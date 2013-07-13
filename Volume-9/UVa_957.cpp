//UVa Problem-957(Popes)
//Accepted
//Running time: 0.116 sec

#include<cstdio>
using namespace std;

int main(){
    int y;
    while(scanf("%d",&y)!=EOF){
        y--;
        int p;
        scanf("%d",&p);
        int a[p];
        for(int i=0;i<p;i++)
            scanf("%d",&a[i]);
        int count=0;
        int j;
        int first;
        int last;
        int max=0;
        for(int i=0;i<p;i++){
            j=i;
            count=0;
            while(a[j]<=a[i]+y){
                j++;
                count++;
                }
            if(count>max){
                max=count;
                first=a[i];
                last=a[j-1];
                }
            }
        printf("%d %d %d\n",max,first,last);
        }
    return 0;
    }
