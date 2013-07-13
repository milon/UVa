//UVa Problem-11586(Train Tracks)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    test=abs(test);
    int ct=test;
    char ch;
    int m=0,f=0;
    while(test--){
        m=0,f=0;
        scanf("%c",&ch);
        while((ch!='\n') && (ch!='\x0')){
            if(ch=='M')
                m++;
            else if(ch=='F')
                f++;
            scanf("%c",&ch);
            }
        if((m==f) && (m>1) && (f>=1))
            printf("LOOP\n");
        else if((m>0) || (f>0))
            printf("NO LOOP\n");
        ch='\x0';
        }
    return 0;
    }

