//UVa Problem-11057(Exact Sum)
//Accepted
//Running time: 0.068 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int length;
	int a[10050];
	while(cin>>length){
		int i,j;         // iterator
		for(i=0;i<length;i++)
			cin>>a[i];
		sort(a,a+length);
		int number;
		cin>>number;
		i=0;
		j=length-1;
		int first;
		while(i<j){
			while(j>i){
				if(a[i]+a[j]==number){
					first=a[i];
					j--;
					break;
                    }
				else if(a[i]+a[j]<number)
					break;
				j--;
                }
			i++;
            }
		cout<<"Peter should buy books whose prices are "<<first<<" and "<<number-first<<".\n"<<endl;
        }
	return 0;
    }
