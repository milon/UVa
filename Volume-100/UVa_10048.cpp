//UVa Problem-10048(Audiophobia)
//Accepted
//Running time: 0.032 sec

#include<iostream>
#include<algorithm>
using namespace std;

#define INT_MAX 2147483647

int d[100+5][100+5];

void reset(int c){
    for(int i = 0; i <= c; i++){
        for(int j = 0; j <= c; j++)
            d[i][j] = INT_MAX;
        }
    }

int main(){
    int c, s, q;
    int cases = 0;
    bool blank = false;
    while(scanf("%d %d %d", &c, &s, &q)){
        if(c == 0 && s == 0 && q == 0)
            break;
        reset(c);
        int c1, c2, decibel;
        for(int i = 0; i < s; i++){
            scanf("%d %d %d",&c1,&c2,&decibel);
            d[c1][c2] = d[c2][c1] = decibel;
            }
        for(int k = 1; k <= c; k++){
            for(int i = 1; i <= c; i++){
                for(int j = 1; j <= c; j++)
                    d[i][j] = d[j][i] = min(d[i][j],max(d[i][k],d[k][j]));
                }
            }
        if(blank )
            printf("\n");
        blank = true;
        printf("Case #%d\n",++cases);
        for(int i = 0; i < q; i++){
            scanf("%d %d",&c1,&c2);
            if(d[c1][c2] == INT_MAX)
                printf("no path\n");
            else
                printf("%d\n",d[c1][c2]);
            }
        }
	return 0;
    }
