//UVa Problem-442(Matrix Chain Multiplication)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<string>
#include<stack>
using namespace std;

struct matrix{
    char name;
    int row;
    int col;
    int cals;

    matrix(){
        cals=0;
        }

    matrix(const char& n, const int& r, const int& c, const int& cl){
        name = n, row = r, col = c, cals = cl;
        }

    friend istream& operator >> (istream& is, matrix& t){
        return is >> t.name >> t.row >> t.col;
        }

    friend ostream& operator << (ostream& os, const matrix& t){
        return os << t.cals;
        }

    friend matrix operator * (const matrix& tl, const matrix& tr){
        matrix r(' ', tl.row, tr.col, tl.cals + tl.row * tl.col * tr.col + tr.cals);
        return r;
        }

    friend bool multipliable(const matrix& tl, const matrix& tr){
        return (tl.col == tr.row);
        }
    };

int main(){
    int n;
    cin>>n;
    matrix m[26],tmp1,tmp2;
    for(int i=0;i<n;i++){
        cin>>tmp1;
        m[tmp1.name-'A']=tmp1;
        }
    string str;
    while(cin>>str){
        bool error=false;
        stack<matrix> suru;
        for(int i=0;i<str.length();i++){
            if(str[i]=='(')
                ;
            else if(str[i]==')'){
                tmp2=suru.top();
                suru.pop();
                tmp1=suru.top();
                suru.pop();
                if(multipliable(tmp1,tmp2))
                    suru.push(tmp1*tmp2);
                else{
                    error=true;
                    break;
                    }
                }
            else
                suru.push(m[str[i]-'A']);
            }
        if(error)
            cout<<"error"<<endl;
        else
            cout<<suru.top()<<endl;
        }
    return 0;
    }
