//UVa Problem-448(OOPS!)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstdlib>
using namespace std;

const int mod = 0x3fff;

const string op[]={"ADD","SUB","MUL","DIV","MOV","BREQ","BRLE","BRLS",
                   "BRGE","BRGR","BRNE","BR","AND","OR","XOR","NOT"
                  };
const int num[]={2,  2,  2,  2,  2,  1,  1,  1,
                 1,  1,  1,  1,  3,  3,  3,  1
                };
const string opcode[]={"R","$","PC+",""};

int main(){
    string in,tmp;
    while(cin>>tmp)
        in+=tmp;
    int p=0;
    while(p<in.size()){
        int opnum=isdigit(in[p])?in[p]-'0':toupper(in[p]-'A')+10;
        p++;
        cout<<op[opnum]<<" ";
        for(int i=0;i<num[opnum];i++){
            int code=0;
            for(int j=0;j<4;j++){
                code<<=4;
                code+=isdigit(in[p])?in[p]-'0':toupper(in[p]-'A')+10;
                p++;
                }
            if(i)
                cout<<",";
            int val=code&mod;
            int pre=code/(mod+1);
            cout<<opcode[pre]<<val;
            }
        cout<<endl;
        }
    return 0;
    }
