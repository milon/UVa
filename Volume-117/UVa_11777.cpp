//UVa Problem-11777(Automate the Grades)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test,kase=0;
    cin>>test;
    while(test--){
        int marks[7];
        for(int i=0;i<7;i++)
            cin>>marks[i];
        sort(marks+4,marks+7);
        double sum=0;
        for(int i=0;i<4;i++)
            sum+=marks[i];
        sum+=((marks[5]+marks[6])/2.0);
        cout<<"Case "<<++kase<<": ";
        if(sum>=90) cout<<"A"<<endl;
        else if(sum>=80) cout<<"B"<<endl;
        else if(sum>=70) cout<<"C"<<endl;
        else if(sum>=60) cout<<"D"<<endl;
        else cout<<"F"<<endl;
        }
    return 0;
    }
