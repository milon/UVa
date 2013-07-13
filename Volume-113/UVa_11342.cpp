//UVa Problem-11342(Three-Square)
//Accepted
//Running time: 0.844 sec

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct square{
    int sq;
    int a;
    int b;
    } s[50000];

bool isPerfectSquare (int p){
    int sqr =(int)sqrt(p);
    if(sqr * sqr == p)
        return true;
    return false;
    }

int main(){
    int testCase;
    scanf("%d", &testCase);
    int len_s = 0;
    for(int i = 0; i < 225; i++){
        for(int j = i; j < 225; j++){
            s[len_s].sq = i*i + j*j;
            s[len_s].a = i;
            s[len_s].b = j;
            len_s++;
            }
        }
    while(testCase--){
        int k;
        scanf("%d", &k);
        bool printed = false;
        for(int i = 0; i < len_s; i++){
            if(isPerfectSquare(k - s[i].sq)){
                int output[3];
                output[0] = s[i].a;
                output[1] = s[i].b;
                output[2] = (int) sqrt(k - s[i].sq);
                sort(output, output + 3);
                printf("%d %d %d\n", output[0], output[1], output[2]);
                printed = true;
                break;
                }
            }
        if(!printed)
            printf("-1\n");
        }
	return 0;
    }

