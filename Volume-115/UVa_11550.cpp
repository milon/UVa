//UVa Problem-11550(DEMANDING DILEMMA)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

int matrix[8+3][30+3];

int main (){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                scanf("%d",&matrix[i][j]);
            }
        bool suru=true;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++)
                sum+=matrix[j][i];
            if(sum!=2)
                suru=false;
            }
        bool vertex[8+3][8+3];
        memset(vertex,false,sizeof(vertex));
        if(suru){
            for(int i=0;i<m;i++){
                int first,second,j=0;
                while(matrix[j++][i]!=1);
                first=j-1;
                while(matrix[j++][i]!=1);
                second=j-1;
                if(!vertex[first][second])
                    vertex[first][second]=vertex[second][first]=true;
                else
                    suru=false;
                }
            }
        if(suru)
            printf("Yes\n");
        else
            printf("No\n");
        }
	return 0;
    }


