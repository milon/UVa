//UVa Problem-10093(An Easy Problem!)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstring>
using namespace std;

char input[10000];
int len_input;

int getVal (char v){
    if(v>='0' && v<='9')
        return v-'0';
    else if(v>='A' && v<='Z')
        return v-'A'+10;
    else
        return v-'a'+36;
    }

int findBase(){
    char maxi='1';
    for(int i=0;i<len_input;i++)
        if(maxi<input[i])
            maxi=input[i];
    return getVal(maxi)+1;
    }

void fix_it(){
    len_input=strlen(input);
    if(isalnum(input[0]))
        return;
    int len=strlen(input);
	for(int i=1;i<=len;i++)
        input[i-1]=input[i];
	len_input=strlen(input);
    }

int main(){
    while(cin>>input){
		fix_it();
        bool baseFound=false;
		int sum=0;
		for(int i=0;i<len_input;i++)
			sum+=getVal(input[i]);
        for(int i=findBase();i<=62;i++){
            if(sum%(i-1)==0){
                cout<<i<<endl;
                baseFound=true;
                break;
                }
            }
        if(!baseFound)
            cout<<"such number is impossible!"<<endl;
        }
	return 0;
    }

