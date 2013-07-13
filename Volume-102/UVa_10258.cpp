//UVa Problem-10258(Contest Scoreboard)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct teams{
    int teamNumber;
	int solved[9+3];
	int penalty[9+3];
	bool submit;
    }suru[100+5];

void reset(){
	for(int i=0;i<105;i++){
	    suru[i].teamNumber=i;
		memset(suru[i].solved,0,sizeof(suru[i].solved));
		memset(suru[i].penalty,0,sizeof(suru[i].penalty));
		suru[i].submit=false;
        }
    }

void calculateAll(){
    for(int i=1;i<105;i++){
        for(int j=1;j<=9;j++){
            if(suru[i].solved[j]){
                suru[i].solved[10]++;
                suru[i].penalty[10]+=suru[i].penalty[j];
                }
            }
        }
    }

bool cmp(teams x,teams y){
	if(x.solved[10]>y.solved[10])
        return true;
	if(x.solved[10]==y.solved[10] && x.penalty[10]<y.penalty[10])
        return true;
	if(x.solved[10]==y.solved[10] && x.penalty[10]==y.penalty[10] && x.teamNumber<y.teamNumber)
        return true;
	return false;
    }

int main(){
	int test;
	cin>>test;
	getchar();
    bool blank=false;
	char input[1000];
	gets(input);
	while(test--){
		reset();
		while(gets(input) && strlen(input)){
			int c,p,t;
			char l;
			sscanf(input,"%d %d %d %c",&c,&p,&t,&l);
			suru[c].submit=true;
			if(l=='R' || l=='U' || l=='E')
                continue;
			if(l=='C'){
			    if(!suru[c].solved[p]){
                    suru[c].solved[p]=1;
                    suru[c].penalty[p]+=t;
                    }
                }
			else{
                if(!suru[c].solved[p])
                    suru[c].penalty[p]+=20;
                }
            }
		calculateAll();
		sort(suru,suru+105,cmp);
		if(blank)
			cout<<endl;
		blank=true;
		for(int i=0;i<=105;i++){
			if(suru[i].submit)
				printf("%d %d %d\n",suru[i].teamNumber,suru[i].solved[10],suru[i].penalty[10]);
            }
        }
	return 0;
    }
