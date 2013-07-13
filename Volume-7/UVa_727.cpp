//UVa Problem-727(Equation)
//Accepted
//Running time: 0.128 sec
//Author: Milon

#include<cstdio>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

stack<char> s;
vector<char> output;

bool check(char p){
    if(p=='+' || p=='-' || p=='*' || p=='/')
        return true;
    return false;
    }

int precidence(char p,char q){
    if((p=='*' || p=='/') && (q=='+' || q=='-')) return 1;
    if((p=='+' || p=='-') && (q=='*' || q=='/')) return -1;
    return 0;
    }

void set_operator(char op){
    queue<char> temp;
    if(!s.empty() && s.top()!='(' && precidence(op,s.top())<=0){
        output.push_back(s.top());
        s.pop();
        }
    while(!s.empty() && s.top()!='(' && precidence(op,s.top())<=0){
        temp.push(s.top());
        s.pop();
        }
    s.push(op);
    while(!temp.empty()){
        output.push_back(temp.front());
        temp.pop();
        }
    }

int main(){
    int test;
    scanf("%d",&test);
    bool blank=false;
    getchar();
    getchar();
    while(test--){
        char ch[5];
        string input;
        output.clear();
        while(gets(ch) && strlen(ch)){
            if(ch[0]=='('){
                if(input.length() && isdigit(input[input.length()-1]))
                    input+='x';
                }
            else if(isdigit(ch[0])){
                if(input.length() && input[input.length()-1]==')')
                    input+='x';
                }
            input+=ch[0];
            }
        for(size_t i=0;i<input.length();i++){
            if(isdigit(input[i]))
                output.push_back(input[i]);
            else if(check(input[i])){
                set_operator(input[i]);
                }
            else if(input[i]=='(')
                s.push('(');
            else if(input[i]==')'){
                while(s.top()!='('){
                    output.push_back(s.top());
                    s.pop();
                    }
                s.pop();
                }
            }
        while(!s.empty()){
            output.push_back(s.top());
            s.pop();
            }
        if(blank)
            printf ("\n");
        blank=true;
        for(size_t i=0;i<output.size();i++){
            if(output[i]!='x')
                printf("%c",output[i]);
            }
        printf("\n");
        }
    return 0;
    }

