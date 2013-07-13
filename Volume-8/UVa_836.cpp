//UVa Problem-836(Largest Submatrix)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
#include<climits>
using namespace std;

int main(){
    int testCase;
    scanf("%d",&testCase);
    bool space=false;
    getchar();
    char input[25+3][25+3];
    gets(input[0]);
    while(testCase--){
        int index=0;
        while(gets(input[index]) && strlen(input[index]))
            index++;
        int a[25+3][25+3];
        for(int i=0;i<index;i++)
            for(int j=0;j<index;j++)
                a[i][j]=input[i][j]=='1'?1:0;
        for(int i=1;i<index;i++)
            for(int j=0;j<index;j++)
                a[i][j]=a[i][j]==1?a[i-1][j]+1:0;
        int maxi=INT_MIN;
        for(int i=0;i<index;i++){
            for(int j=0;j<index;j++){
                int cnt=1;
                for(int k=j-1;k>=0 && a[i][k]>=a[i][j];k--)
                    cnt++;
                for(int k=j+1;k<index && a[i][k]>=a[i][j];k++)
                    cnt++;
                cnt*=a[i][j];
                if(maxi<cnt)
                    maxi=cnt;
                }
            }
        if(space)
            printf("\n");
        space=true;
        printf("%d\n",maxi);
        }
	return 0;
    }
