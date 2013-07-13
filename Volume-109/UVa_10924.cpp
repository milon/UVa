//UVa Problem-10924(Prime Words)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
    char n[20];
    int sum ;
    while(cin >> n){
        int len = strlen(n);
        sum = 0;
        for(int i = 0; i < len; i++){
            if(n[i] >= 97)
                sum += (n[i]-96);
            else
                sum += (n[i]-38);
			}
        bool k = false;
        for(int i = 2; i <= sqrt(sum); i++){
            if(sum % i == 0){
                k = true;
                break;
				}
			}
        if(sum == 1 || k == false)
            cout << "It is a prime word.\n";
        else
            cout << "It is not a prime word.\n";
		}
	return 0;
	}
