//UVa Problem-476(Points in Figures: Rectangles)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<cstdio>
using namespace std;

struct node{
    double x1;
    double y1;
    double x2;
    double y2;
	}suru[12];

int main(){
    char ch;
    int index=0;
    while(scanf("%c",&ch) && ch!='*'){
        if(ch!='r')
            continue;
        scanf("%lf",&suru[index].x1);
        scanf("%lf",&suru[index].y1);
        scanf("%lf",&suru[index].x2);
        scanf("%lf",&suru[index].y2);
        index++;
		}
	int numbering=0;
    double x,y;
    while(scanf("%lf %lf",&x,&y) && x!=9999.9 && y!=9999.9){
        bool flag=true;
        numbering++;
        for(int i=0;i<index;i++){
            if(x>suru[i].x1 && x<suru[i].x2 && y<suru[i].y1 && y>suru[i].y2){
                printf("Point %d is contained in figure %d\n",numbering,i+1);
                flag=false;
				}
			}
        if(flag)
            printf("Point %d is not contained in any figure\n",numbering);
		}
    return 0;
	}
