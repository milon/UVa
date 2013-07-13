//UVa Problem-10700(Camel trading)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

bool isdigit(char c){
    return c>='0' && c<='9';
    }

int toint(string s){
    long long int r=0;
    istringstream sin(s);
    sin>>r;
    return r;
    }

int main(){
    int test;
    string expr,expr_back;
    cin>>test;
    while(test--){
        cin>>expr;
        vector<long long>num,num_back;
        vector<char>op,op_back;
        string number;
        for(int i=0;i<expr.size();i++){
            if(isdigit(expr[i])){
                number+=expr[i];
                }
            else{
                num.push_back(toint(number));
                op.push_back(expr[i]);
                number="";
                }
            }
        num.push_back(toint(number));
        num_back=num;
        op_back=op;
        for(int i=0;i<op.size();i++){
            if(op[i]=='*'){
                num[i]*=num[i+1];
                num.erase(num.begin()+i+1);
                op.erase(op.begin()+i);
                i--;
                }
            }
        long long min=0;
        for(int i=0;i<num.size();i++){
            min+=num[i];
            }
        op=op_back;
        num=num_back;
        for(int i=0;i<op.size();i++){
            if(op[i]=='+'){
                num[i]+=num[i+1];
                num.erase(num.begin()+i+1);
                op.erase(op.begin()+i);
                i--;
                }
            }
        long long max=1;
        for(int i=0;i<num.size();i++){
            max*=num[i];
            }
        cout << "The maximum and minimum are " << max <<" and " << min <<"."<<endl;
        }
    return 0;
    }
