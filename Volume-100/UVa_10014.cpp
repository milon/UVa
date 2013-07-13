//UVa Problem-10014(Simple calculations)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstdio>
using namespace std;

double pre,back,x,y;

void calculation(double a){
	double temp1,temp2;
	temp1=pre;
	temp2=back;
	pre=pre*2-x;
	back=(back+a)*2-y;
	x=temp1;
	y=temp2;
	}

int main(){
	int num,n;
	double first,last,s[5000];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>n;
		cin>>first>>last;
		pre=1;
		back=0;
		x=0;
		y=first;
		for(int j=0;j<n;j++){
			cin>>s[j];
			calculation(s[j]);
			}
		printf("%-2.2lf\n",(last-back)/pre);
		if(i!=num-1)
			cout<<endl;
		}
	return 0;
	}
