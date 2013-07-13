//UVa Problem-10050(Hartals)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

int main(){
    int Array[3651];
    int freqPerPerty;
    int Day;
    int Case;
    int Party;
    int total;
    int i,j,k;
    scanf("%d",&Case);
    for(i=0;i<Case;i++){
        scanf("%d",&Day);
        scanf("%d",&Party);
        for(k=1;k<=Day;k++)
            Array[k]=0;
        for(j=0;j<Party;j++){
            scanf("%d",&freqPerPerty);
            for(k=1;k<=Day;k++)
                if(k%freqPerPerty==0)
                    Array[k]=1;
            }
        if((Array[6]==1)&&(6<=Day))
            Array[6]=0;
        if((Array[7]==1)&&(7<=Day))
            Array[7] = 0 ;
        for(k=13;k<=Day;k=k+7){
            if(Array[k]==1)
                Array[k]=0;
            if(Array[k+1]==1)
                Array[k+1]=0;
            }
        total=0;
        for(k=2;k<=Day;k++)
            if(Array[k]==1)
                ++total ;
        printf("%d\n",total);
        }
    return 0 ;
    }
