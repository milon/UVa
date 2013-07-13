//UVa Problem-11958(Coming Home)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include <cstdio>
using namespace std;

#define INF_MAX 2147483647

int dr[]= {-1, -1, 0, 1, 1, 1, 0, -1};
int dc[]= {0, 1, 1, 1, 0, -1, -1, -1};



int convertToMinute (char *ch){
    int hr = (ch [0] - '0') * 10 + (ch [1] - '0');
    int min = (ch [3] - '0') * 10 + (ch [4] - '0');
    return hr * 60 + min;
    }

int main(){
    int test;
    scanf("%d",&test);
    int kase=0;
    while(test--){
        int numOfBuses;
        scanf("%d",&numOfBuses);
        char ch[20];
        scanf ("%s",ch);
        int currTime=convertToMinute(ch);
        int minTime=INF_MAX;
        for(int i=0;i<numOfBuses; i++){
            scanf("%s",ch);
            int arrivalTime=convertToMinute(ch);
            if(arrivalTime<currTime)
                arrivalTime+=1440;
            int travelTime;
            scanf("%d",&travelTime);
            int reachTime=arrivalTime+travelTime;
            if(reachTime-currTime<minTime)
                minTime=reachTime-currTime;
            }
        printf("Case %d: %d\n",++kase,minTime);
        }
	return 0;
    }
