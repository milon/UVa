//UVa Problem-155(All Squares)
//Accepted
//Running time: 0.024 sec
//Author: Milon

#include<cstdio>
using namespace std;

int squares(int k,int cenx,int ceny,int surx,int sury){
    if( k<=0)
        return 0;
    int left=cenx-k;
    int right=cenx+k;
    int top=ceny-k;
    int bottom=ceny+k;
    if(left<0 || right<0 || top<0 || bottom<0)
        return 0;
    int result=0;
    if(surx>=left && surx<=right && sury<=bottom && sury>=top)
        result++;
    result+=squares(k/2,left,top,surx,sury);
    result+=squares(k/2,right,top,surx,sury);
    result+=squares(k/2,left,bottom,surx,sury);
    result+=squares(k/2,right,bottom,surx,sury);
    return result;
    }

int main(){
    int k,surx,sury;
    while(scanf("%d %d %d",&k,&surx,&sury)!=EOF){
        if(k==0 && surx==0 && sury==0)
            break;
        int cenx=1024,ceny=1024;
        printf("%3d\n",squares(k,cenx,ceny,surx,sury));
        }
    return 0;
    }
