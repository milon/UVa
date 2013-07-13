//Uva Problem-612(DNA Sorting)
//Accepted
//Running time: 0.312 sec
//Author: Milon

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct data{
	char ar[50];
	int DNA;
	}ans[100];

int bubble_sort(char ar[],int end){
	int count=0;
	for(int i=end;i>0;i--){
		for(int j=0;j<i;j++){
			if(ar[j]>ar[j+1]){
				swap(ar[j],ar[j+1]);
				count++;
				}
			}
		}
	return count;
	}

void b_sort(int end){
	int count=0;
	for(int i=end;i>0;i--){
		for(int j=0;j<i;j++){
			if(ans[j].DNA>ans[j+1].DNA){
				swap(ans[j],ans[j+1]);
				}
			}
		}
	}

int main(){
	char temp[50];
	int num,n,m;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>n>>m;
		for(int x=0;x<100;x++){
			for(int y=0;y<50;y++)
				ans[x].ar[y] = '\0';
			}
		for(int x=0;x<m;x++){
			for(int y=0;y<n;y++){
				cin>>ans[x].ar[y];
				}
			strcpy(temp,ans[x].ar);
			ans[x].DNA=bubble_sort(temp,n-1);
			}
		b_sort(m-1);
		for(int j=0;j<m;j++)
			cout<<ans[j].ar<<endl;
		if(i!=num-1)
			cout<<endl;
		}
	return 0;
	}
