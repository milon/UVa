//UVa Problem-120(Stacks of Flapjacks)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<algorithm>
using namespace std;

void flip(int *p,int x){
    for(int i=0;i<=x/2;i++)
        swap(p[i],p[x-i]);
    }

int main(){
    char input[150];
    while(gets(input)){
        int cake[35];
        int index=0;
        int numbers=0;
        while(input[index]!=0){
            char temp[5];
            int i=0;
            while(input[index]!=' ' && input[index]!=0)
                temp[i++]=input[index++];
            temp[i]=0;
            cake[numbers++]=atoi(temp);
            if(input[index]==' ')
                index++;
            }
        printf("%s\n",input);
        int temp1[35];
        for(int i=0;i<numbers;i++)
            temp1[i]=cake[i];
        for(int i=0;i<numbers;i++){
            for(int j=i+1;j<numbers;j++){
                if(cake[i]>cake[j])
                    swap(cake[i],cake[j]);
                }
            }
        index=numbers-1;
        while(index>-1){
            if(temp1[index]!=cake[index]){
                if(temp1[0]==cake[index]){
                    printf("%d ",numbers-index);
                    flip(temp1,index);
                    }
                else{
                    for(int i=0;i<numbers;i++){
                        if(temp1[i]==cake[index]){
                            printf("%d ",numbers-i);
                            flip(temp1,i);
                            flip(temp1,index);
                            }
                        }
                    }
                }
            index--;
            }
        printf("0\n");
        }
    return 0;
    }
