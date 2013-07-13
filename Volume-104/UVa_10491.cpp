//Uva Problem-10491(Cows and Cars)
//Accepted
//Running time: 0.076 sec

#include<iostream>
using namespace std;

int main(){
    double cow,car,show;
    while(cin>>cow>>car>>show){
        double fcow=cow/(cow+car);
        double fcar=car/(cow+car);
        double fcowscar=(car)/(cow+car-show-1);
        double fcarscar=(car-1)/(cow+car-show-1);
        printf("%.5lf\n",fcow*fcowscar+fcar*fcarscar);
        }
    return 0;
    }
