//UVa Problem-11219(How old are you?)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int current_date;
int current_month;
int current_year;

int birth_date;
int birth_month;
int birth_year;

bool invalid (){
    if ( birth_year < current_year )
        return false;
    if ( birth_year > current_year )
        return true;
    if ( birth_month > current_month )
        return true;
    if ( birth_month < current_month )
        return false;
    if ( birth_date > current_date )
        return true;
    return false;
    }

int count_year (){
    int year = current_year - birth_year;
    if(current_month - birth_month < 0)
        year--;
    else if(current_month - birth_month == 0){
        if(current_date - birth_date < 0)
            year--;
        }
    return year;
    }

int main(){
    int dataset;
    scanf("%d", &dataset);
    int cases = 0;
    while(dataset--){
        scanf("%d/%d/%d",&current_date,&current_month,&current_year);
        scanf ("%d/%d/%d", &birth_date,&birth_month,&birth_year);
        if(invalid())
            printf ("Case #%d: Invalid birth date\n", ++cases);
        else{
            int year= count_year();
            if(year > 130)
                printf("Case #%d: Check birth date\n", ++cases);
            else
                printf("Case #%d: %d\n", ++cases, year);
            }
        }
    return 0;
    }
