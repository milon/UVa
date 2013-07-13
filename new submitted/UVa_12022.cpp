//UVa Problem-12022(Ordering T-shirts)
//Accepted
//Running time: 0.008 sec

#include <iostream>
using namespace std;

int main(){
	long long num[] = {1, 1, 3, 13, 75, 541, 4683, 47293, 545835, 7087261, 102247563, 1622632573};
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		cout<<num[n]<<endl;
        }
	return 0;
    }
