//UVa Problem-10370(Above Average)
//Accepted
//Running time: 0.004 sec

#include<cstdio>
using namespace std;

int main(){
    int noOfTestCase ;
    int noOfStudent ;
    int grade[1000] ;
    int i,j;
    int sum ;
    int avg ;
    scanf("%d", &noOfTestCase ) ;
    for( i = 0 ; i < noOfTestCase; i++ ){
        scanf("%d", &noOfStudent ) ;
        sum = 0 ;
        for( j = 0; j < noOfStudent ; j++ ){
            scanf("%d", &grade[j] ) ;
            sum = sum + grade[j] ;
            }
        avg = sum / noOfStudent ;
        sum = 0 ;
        for( j = 0 ; j < noOfStudent ; j++ )
            if( grade[j] > avg )
                ++sum ;

        printf("%.3lf%\n", (double)sum/noOfStudent*100 ) ;
        }

    return 0 ;
    }
