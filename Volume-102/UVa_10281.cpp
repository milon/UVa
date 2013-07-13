//UVa Problem-10281(Avarage Speed)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
using namespace std;

char time[2000];
int h,m,s,speed,newspeed,now;
float distance=0;

int main(){
   int n,oldtime=0;
   speed=0;
   while(gets(time)){
       n=sscanf(time,"%d: %d: %d %d",&h,&m,&s,&newspeed);
       now=h*3600+m*60+s;
       distance+=(now-oldtime)/3600.0*speed;
       oldtime=now;
       if(n==3)
            printf("%02d:%02d:%02d %.2f km\n",h,m,s,distance);
       else if(n==4)
        speed=newspeed;
        }
    return 0;
    }
