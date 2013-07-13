//UVa Problem-11530(SMS Typing)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
using namespace std;

char suru[105], * po;
int k[125];
int n, sum, tc = 1;

int main(){
    k[97] = 1; k[98] = 2; k[99] = 3; k[100] = 1; k[101] = 2; k[102] = 3;
    k[103] = 1; k[104] = 2; k[105] = 3; k[106] = 1; k[107] = 2; k[108] = 3;
    k[109] = 1; k[110] = 2; k[111] = 3; k[112] = 1; k[113] = 2; k[114] = 3;
    k[115] = 4; k[116] = 1; k[117] = 2; k[118] = 3; k[119] = 1; k[120] = 2;
    k[121] = 3; k[122] = 4; k[32] = 1;
    gets(suru);
    sscanf(suru,"%d",&n);
    while(n--){
        po = gets(suru);
        while(*po){
            sum += k[*po];
            po++;
            }
        printf("Case #%d: %d\n",tc,sum);
        sum = 0;
        tc++;
        }
    return 0;
    }
