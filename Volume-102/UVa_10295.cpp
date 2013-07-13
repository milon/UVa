//UVa Problem-10295(Hay Points)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cstring>
using namespace std;

struct block {
	int value;
	char str [20];
	} a [1020];

int m;

int call( char x[]){
	for(int i = 0; i < m; i++){
		if(strcmp(a[i].str,x) == 0)
			return a[i].value;
		}
	return 0;
	}

int main(){
	int n, length, res;
	char line[10000];
	char partial[100];
	while(scanf("%d %d", &m, &n) != EOF){
		int i;
		for(i = 0; i < m; i++)
			scanf ("%s %d", a [i].str, &a [i].value);
		gets(line);
		for(i = 0; i < n; i++){
			res = 0;
			gets (line);
			while(strcmp(line, ".") != 0){
				length = strlen (line);
				int j = 0;
				while(j < length){
					int k = 0;
					while(line[j] != ' ' && line[j] != 0)
						partial[k++] = line[j++];
					partial[k++] = '\0';
					j++;
					res += call(partial);
					}
				gets(line);
				}
			printf("%d\n", res);
			}
		}
	return 0;
	}
