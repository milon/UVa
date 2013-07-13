//UVa Problem-514(Rails)
//Accepted
//Running time: 0.084 sec
//Author: Milon

#include<cstdio>
using namespace std;

int train[100];

int main(){
    int num,now,temp,i,count;
    bool fin;
    while(scanf("%d",&num)==1){
        if(num==0)
            break;
        while(true){
            fin=false;
            now=1;
            count=0;
            for(i=1;i<=num&&now<=num+1;i++){
                scanf("%d",&temp);
                if(temp==0){
                    fin=true;
                    break;
                    }
                else if(temp==now)
                    now++;
                else if(count!=0&&train[count-1]==temp)
                    count--;
                else{
                    while(temp!=now&&now<=num)
                        train[count++]=now++;
                    if(now<=num)
                        now++;
                    }
                }
            if(fin){
                putchar(10);
                break;
                }
            if(count==0)
                printf("Yes\n");
            else
                printf("No\n");
            }
        }
    return 0;
    }
