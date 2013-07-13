//UVa Problem-855(Lunch in Grid City)
//Accepted
//Running time: 0.068 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int s,a,f;
		cin>>s>>a>>f;
		int p[50000+5];
		int q[50000+5];
		for(int i=0;i<f;i++)
			cin>>p[i]>>q[i];
		sort(p,p+f);
		sort(q,q+f);
		if(f%2)
            cout<<"(Street: "<<p[f/2]<<", Avenue: "<<q[f/2]<<")"<<endl;
		else
            cout<<"(Street: "<<p[(f-1)/2]<<", Avenue: "<<q[(f-1)/2]<<")"<<endl;
        }
	return 0;
    }

