//UVa Problem-10487(Closest Sums)
//Accepted
//Running time: 0.068 sec

#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int n, i, q, c, sz, idx, idx2, t1, t2, elteres, ce = 0;
    while(true){
        scanf("%d",&n);
        if(!n) break;
        printf("Case %d:\n",++ce);
        int set[n], i = 0, q = 0;
        sz = n;
        while(n--){
            scanf("%d",&set[i++]);
            }
        scanf("%d",&q);
        while(q--){
            scanf("%d",&c);
            elteres = 2147483647;
            for(idx = 0; idx < sz; idx++){
                for(idx2 = idx + 1; idx2 < sz; idx2++){
                    if(abs((set[idx] + set[idx2]) - c) < elteres){
                        elteres = abs((set[idx] + set[idx2]) - c);
                        t1 = set[idx];
                        t2 = set[idx2];
                        }
                    }
                }
            printf("Closest sum to %d is %d.\n",c,t1+t2);
            }
        }
    return 0;
    }
