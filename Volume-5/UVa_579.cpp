//UVa Problem-579(ClockHands)
//Accepted
//Running time: 0.040 sec
//Author: Milon

#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int hour,min;
    double angleh, anglem,angler;
    while(scanf("%d%*c%d",&hour,&min)==2){
        if(hour==0&&min==0)
            break;
        angleh=((double)hour+((double)min/60))*30;
        anglem=(double)min*6;
        angler=angleh-anglem;
        if(angler<0)
            angler= -angler;
        if(angler>180)
            angler =(double)360-angler;
        printf("%.3lf\n",angler);
        }
    return 0;
    }
