//UVa Problem-11448(Who said  crisis?)
//Accepted
//Running time: 0.024 sec

#include<cstdio>
#include<cstring>
using namespace std;

#define BIGINT_SIZE 10008

char buffer[BIGINT_SIZE];

struct Bigint{
    char ele[BIGINT_SIZE];
    int len;
    int positive;
    };

Bigint Bread(){
    Bigint r;
    scanf("%s",buffer);
    r.len=strlen(buffer);
    for(int i=0,j=r.len-1;i<r.len;i++,j--)
        r.ele[i]=buffer[j]-'0';
    return r;
    }

void Bwrite(Bigint a){
    if(!a.positive)
        putc('-',stdout);
    for(int i=a.len-1;i>=0;i--)
        putc(a.ele[i]+'0',stdout);
    putc(10,stdout);
    }

int Bbiggere(Bigint a,Bigint b){
    if(a.len!=b.len)
        return (a.len>b.len);
    for(int i=a.len-1;i>=0;i--)
        if(a.ele[i]!=b.ele[i])
            return (a.ele[i]>b.ele[i]);
    return 1;
    }

Bigint Bminus(Bigint a,Bigint b){
    int i, carry;
    Bigint r;
    r.positive=Bbiggere(a,b);
    if(!r.positive){
        Bigint tmp=a;
        a=b;
        b=tmp;
        }
    for(i=0,carry=0;i<b.len;i++){
        r.ele[i]=a.ele[i]-b.ele[i]-carry;
        carry=0;
        while(r.ele[i]<0){
            r.ele[i]+=10;
            carry++;
            }
        }
    for(;i<a.len;i++){
        r.ele[i]=a.ele[i]-carry;
        carry=0;
        while(r.ele[i]<0){
            r.ele[i]+=10;
            carry++;
            }
        }
    r.len=a.len;
    while(r.len>1 && r.ele[r.len-1]==0)
        r.len--;
    return r;
    }

int main(){
    int n;
    Bigint a,b;
    scanf("%d",&n);
    while(n--){
        a=Bread();
        b=Bread();
        Bwrite(Bminus(a,b));
        }
    return 0;
    }

