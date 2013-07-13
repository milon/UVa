//UVa Problem-12019(Doom's Day Algorithm)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include <vector>
#include <iostream>
using namespace std;

int main(){
	string day[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	vector<vector<int> >week(12);
	int s=5;
	for(int i=0;i<=11;i++){
		for(int j=0;j<=month[i]-1;j++){
			week[i].push_back(s);
			s=(s+1)%7;
            }
        }
	int test;
	cin>>test;
	while(test--){
		int d,m;
		cin>>m>>d;
		cout<<day[week[m-1][d-1]]<<endl;
        }
	return 0;
    }

