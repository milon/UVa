//UVa Problem-10696(f91)
//Accepted
//Running time: 0.196 sec

#include<cstdio>
using namespace std;

int f91( int i ){
    if( i <= 100 )
        return f91( f91(i+11) ) ;
    else
        return i-10 ;
	}

int main(){
    int in ;
    int i ;
    while(scanf("%d", &in )){
        if( in == 0 )
            break ;
        printf("f91(%d) = ",in) ;
        in = f91( in ) ;
        printf("%d\n", in ) ;
		}
    return 0 ;
	}
