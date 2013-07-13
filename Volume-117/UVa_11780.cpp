//UVa Problem-11780(Miles 2 Km)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    while(true){
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        double a=(int)(1.6*n);
        double b=a+1;
        printf("%.2lf\n",min(fabs(1.6*n-a),fabs(b-1.6*n)));
        }
    return 0;
    }
