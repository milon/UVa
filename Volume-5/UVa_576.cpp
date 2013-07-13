//UVa Problem-576(Haiku Review)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int is_vowel (char a){
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y')
		return 1;
	return 0;
    }

int call(char a[]){
	int length = strlen (a);
	int count = 0;
	int i = 1;
	while(i < length){
		if(is_vowel(a[i]) && !is_vowel(a[i-1]))
			count++;
		i++;
        }
	return count;
    }

int main(){
	char line [250];
	char first [250];
	char second [250];
	char third [250];
	char end[] = "e/o/i";
	while(gets(line)){
		if(!strcmp(line,end))
			return 0;
		int length = strlen(line);
		int i = 0, j = 1;
		first [0] = 's';
		while(line[i] != '/')
			first[j++] = line[i++];
		first[j] = '\0';
		i++;
		j = 1;
		second[0] = 's';
		while(line[i] != '/')
			second[j++] = line[i++];
		second[j] = '\0';
		i++;
		j = 1;
		third [0] = 's';
		while(i < length)
			third[j++] = line[i++];
		third[j] = '\0';
		if(call(first) != 5)
			printf("1");
		else if(call(second) != 7)
			printf("2");
		else if(call(third) != 5)
			printf("3");
		else
			printf("Y");
		printf("\n");
        }
	return 0;
    }
