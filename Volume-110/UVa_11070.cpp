//UVa Problem-11070(The good old times)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<stack>
#include<iomanip>
using namespace std ;

int main(){
    stack<char> suru;
    char c;
    double a,b,sum;
    while(cin>>a){
        sum=0;
        while(true){
            c=getchar();
            if(c=='\n'){
                if(suru.empty())
                    sum+=a;
                else{
                    char t=suru.top();
                    suru.pop() ;
                    if(t=='+')
                        sum+=a;
                    else
                        sum-=a;
                    }
                break;
                }
            cin>>b;
            if((c=='+') || (c=='-')){
                if(suru.empty()){
                    suru.push(c);
                    sum+=a;
                    a=b;
                    }
                else{
                    char t=suru.top();
                    suru.pop();
                    suru.push(c);
                    if(t=='+')
                        sum+=a;
                    else
                        sum-=a;
                    a=b;
                    }
                }
            else if(c == '*')
                a*=b;
            else if(c=='/')
                a/=b;
            }
        cout<<setprecision(3)<<setiosflags(ios::fixed)<<sum<<endl;
        }
    return 0;
    }
