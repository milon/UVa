//UVa Problem-10327(Flip Sort)
//Accepted
//Running time: 0.084 sec

#include<iostream>
#include<algorithm>
using namespace std;

int bubble_sort(int ar[], int end);

int main(){
    int n, ar[1000];
    while(cin >> n){
        for(int i = 0; i < n; i++)
            cin >> ar[i];
        cout << "Minimum exchange operations : " << bubble_sort(ar, n-1) << endl;
		}
    return 0;
	}

int bubble_sort(int ar[], int end){
    int count = 0;
    for(int i = end; i > 0; i--)
        for(int j = 0; j < i; j++)
            if(ar[j] > ar[j+1]){
                swap(ar[j],ar[j+1]);
                count++;
				}
    return count;
	}
