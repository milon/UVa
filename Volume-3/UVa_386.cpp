//UVa Problem-386(Perfect Cubes)
//Accepted
//Running time: 0.140 sec

#include<iostream>
using namespace std;

int main(){
	unsigned long int a,b,c,d,i,j,k,l;
	for (i=6;i<=200;i++){
		a=i*i*i;
		for (j=2;j<i;j++){
			b=j*j*j;
			for (k=j;k<i;k++){
				c=k*k*k;
				for (l=k;l<i;l++){
					d=l*l*l;
					if (a==(b+c+d)){
						cout<<"Cube = "<<i<<", Triple = (";
						cout<<j<<","<<k<<","<<l<<")"<<endl;
						break;
                        }
                    }
                }
            }
        }
	return 0;
    }
