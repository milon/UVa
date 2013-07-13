//UVa Problem-356(Square Pegs And Round Holes)
//Accepted
//Running time: 0.020 sec

#include<iostream>
using namespace std;

int ans[151];

int main(){
    int n,a,b;
    for(int i=1;i<151;i++){
        double r=i-0.5;
        int sum=0;
        for(int x=1;x<=i;x++){
            for(int y=1;y<=i;y++){
                if(x*x+y*y<r*r)
                    sum++;
                }
            }
        ans[i]=4*sum;
        }
    bool suru=false;
    while(cin>>n){
        if(suru) cout<<endl;
        suru=true;
        printf("In the case n = %d, %d cells contain segments of the circle.\n",n,8*n-4);
        printf("There are %d cells completely contained in the circle.\n",ans[n]);
        }
    return 0;
    }
