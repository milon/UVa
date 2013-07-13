//UVa Problem-11565(Simple Equations)
//Acepted
//Running time: 0.012 sec

#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        vector<int> values;
        values.push_back(1);
        values.push_back(-1);
        for(int i=2;i<=b/2;i++){
            if(b%i==0){
                values.push_back(i);
                values.push_back(b/i);
                values.push_back(i*-1);
                values.push_back(b/i*-1);
                }
            }
        sort(values.begin(),values.end());
        bool frq[10000+10];
        memset(frq,false,sizeof(frq));
        bool printed=false;
        for(unsigned int i=0;i<values.size();i++)
            frq[values[i]]=true;
        for(unsigned int i=0;i<values.size();i++){
            for(unsigned int j=0;j<values.size();j++){
                int x=values[i];
                int y=values[j];
                int z=a-(x+y);
                if(frq[z] && x*y*z==b && x*x+y*y+z*z==c && x!=y && y!=z && z!=x){
                    printf("%d %d %d\n",x,y,z);
                    printed=true;
                    i=j=values.size();
                    }
                }
            }
        if(!printed)
            printf("No solution.\n");
        }
    return 0;
    }
