//UVa Problem-11548(BLACKBOARD BONANZA)
//Accepted
//Running time: 0.916 sec

#include<cstdio>
#include<cstring>
using namespace std;

int n, db, sz, j, max, i, tmp;
char words[75][75];

int illesztes(char *mire, char *mit){
	int h1 = strlen(mire), h2 = strlen(mit), i, j, locmax = 0, egyezes = 0;
	for(i = 0; i < h1; i++){
		egyezes = 0;
		for(j = 0; j + i < h1 && j < h2; j++){
			if(mire[i+j] == mit[j])
				egyezes++;
			}
		if(egyezes > locmax)
			locmax = egyezes;
		}
	return locmax;
	}

char temp[10];

int main(){
	gets(temp);
	sscanf(temp,"%d",&n);
	while(n--){
		gets(temp);
		sscanf(temp,"%d",&db);
		while(db--){
			gets(words[sz++]);
			}
		for(i = 0; i < sz; i++){
			for(j = 0; j < sz; j++){
				if(j == i)
					continue;
				tmp = illesztes(&words[i][0],&words[j][0]);
				if(tmp > max)
					max = tmp;
				}
			}
		printf("%d\n",max);
		sz = 0;
		max = 0;
		}
	return 0;
	}
