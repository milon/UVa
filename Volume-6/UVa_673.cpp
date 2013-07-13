//UVa Problem-673(Parentheses Balance)
//Accepted
//Running time: 0.096 sec
//Author: Milon

#include<iostream>
using namespace std;

class stack {
    private:
        char d[128];
        int count;
    public:
        stack(){
            count=0;
            }
        void push(char c);
        bool pop(char c);
        bool is_empty();
    };

int main(){
    int n;
    cin>>n;
    getchar();
    for(int z=0;z<n;z++){
        stack a;
        char t;
        for( ; ; ){
            t=getchar();
            if(t=='\n')
                break ;
            else if((t == '[')||(t == '('))
                a.push(t) ;
            else if((t == ']')||(t == ')')){
                if(a.pop(t))
                    continue ;
                else{
                    char str[128] ;
                    cin.getline(str,128,'\n');
                    break;
                    }
                }
            else
                continue ;
            }
        if(a.is_empty()){
            cout<<"Yes\n" ;
            continue ;
            }
        else{
            cout<<"No\n" ;
            continue;
            }
        }
    return 0;
    }

void stack::push(char c){
    d[count]=c;
    count++;
    }

bool stack::pop(char c){
    if(c == ']'){
        if(d[count-1] == '['){
            count--;
            return true;
            }
        else{
            count++ ;
            return false;
            }
        }
    else{
        if(d[count-1] == '('){
            count--;
            return true;
            }
        else{
            count++ ;
            return false ;
            }
        }
    }

bool stack::is_empty(){
    if(count == 0)
        return true;
    else
        return false;
    }
