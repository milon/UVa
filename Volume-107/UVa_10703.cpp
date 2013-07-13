//UVa Problem-10703(Free spots)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool a[500+5][500+5];
int X1, Y1, X2, Y2;

void make_consistent(){
    if(X1>X2 && Y1<=Y2)
        swap(X1, X2);
    else if(X1 >= X2 && Y1 >= Y2){
        swap (X1, X2);
        swap (Y1, Y2);
        }
    else if(X1 <= X2 && Y1 > Y2)
        swap (Y1, Y2);
    }

void reset(){
    for(int i = 0; i < 505; i++)
        memset(a[i], false, sizeof(a[i]));
    }

int main(){
    int w, h, n;
    while(scanf("%d %d %d",&w,&h,&n)){
        if(w == 0 && h == 0 && n == 0)
            break;
        reset();
        for(int i = 0; i < n; i++){
            scanf ("%d %d %d %d",&X1,&Y1,&X2,&Y2);
            make_consistent();
            for(int j = X1; j <= X2; j++){
                for(int k = Y1; k <= Y2; k++)
                    a[j][k] = true;
                }
            }
        int res = 0;
        for(int i = 1; i <= w; i++){
            for(int j = 1; j <= h; j++)
                if(a[i][j] == false)
                    res++;
            }
        if(res == 0) printf("There is no empty spots.\n");
        else if(res == 1) printf("There is one empty spot.\n");
        else printf("There are %d empty spots.\n", res);
    }

	return 0;
}
