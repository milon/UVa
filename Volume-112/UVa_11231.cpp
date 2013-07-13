//UVa Problem-11231(Black and white painting)
//Accepted
//Running time: 0.020 sec

#include<cstdio>
using namespace std;

int main(){
    char line[100],first_box,black,white;
    int n,m,c,ne,me,code,x,y,z,q,r,s,v;
    black='b';
    white='w';
    while(fgets(line,100,stdin)){
        sscanf(line,"%d %d %d",&n,&m,&c);
        if(n==0 && m==0 && c==0)
            break;
        ne=n&1;
        me=m&1;
        ne<<=2;
        me<<=1;
        code=0;
        code=ne|me|c;
        if(code==0)
            first_box=black;
        else if(code==1)
            first_box=white;
        else if(code==2)
            first_box=white;
        else if(code==3)
            first_box=black;
        else if(code==4)
            first_box=white;
        else if(code==5)
            first_box=black;
        else if(code==6)
            first_box=black;
        else
            first_box=white;
        if(first_box==white){
            x=n-6;
            x>>=1;
            y=m-6;
            y>>=1;
            q=n-7;
            q>>=1;
            r=m-7;
            r>>=1;
            }
        else{
            x=n-7;
            x>>=1;
            y=m-6;
            y>>=1;
            q=n-6;
            q>>=1;
            r=m-7;
            r>>=1;
            }
        z=x*y;
        s=q*r;
        v=s+z;
        printf("%d\n",v);
        }
    return 0;
    }
