//UVa Problem-11479(Is this the easiest problem?)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<ciostream>
using namespace std;

int main() {
   	int count;
	cin>>count;
   	for(int i=0;i<count;i++) {
   		printf("Case %d: ", i+1);
   		long long int a, b, c;
   		cin >> a >> b >> c;
   		if ((a+b <= c) || (b+c <=a) || (c+a <= b)) {
   			printf("Invalid");
			}
   		else if (a==b && b==c && c==a) {
   			printf("Equilateral");
			}
   		else if (a==b || b==c || c==a) {
   			printf("Isosceles");
			}
   		else if (a != b && b != c && c != a) {
   			printf("Scalene");
			}
   		printf("\n");
		}
   	return 0;
	}
