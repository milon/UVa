//UVa Problem-10761(Broken Keyboard)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

string broken;

bool has_or_not(char x){
    for(unsigned int i=0;i<broken.length();i++){
        if(tolower(broken.at(i))==x)
            return true;
        }
    return false;
    }

int main(){
    int keyboard=0;
    cout<<"+----------+----------------+-----------------------------+"<<endl;
    cout<<"| Keyboard | # of printable | Additionally, the following |"<<endl;
    cout<<"|          |      lines     |  letter keys can be broken  |"<<endl;
    cout<<"+----------+----------------+-----------------------------+"<<endl;
    while(cin>>broken && broken!="finish"){
        getchar();
        string text;
        int printable_lines=0;
        int small_letters[28];
        for(int i=0;i<28;i++)
            small_letters[i]=0;
        for(unsigned int i=0;i<broken.length();i++){
            if(isalpha(broken.at(i)))
                small_letters[tolower(broken.at(i))-'a']=1;
            }
        do{
            getline(cin,text);
            bool flag=true;
            for(unsigned int i=0;i<text.length();i++){
                if(has_or_not(tolower(text.at(i)))){
                    flag=false;
                    break;
                    }
                }
            if(flag){
                printable_lines++;
                for(unsigned int i=0;i<text.length();i++){
                    if(isalpha(text.at(i)))
                        small_letters[tolower(text.at(i))-'a']=1;
                    }
                }
            }while(text!="END");
        int space=0;
        printf("|   %3d    |      %3d       | ",++keyboard,printable_lines++);
        for(int i=0;i<26;i++){
            if(small_letters[i]==0){
                printf("%c",i+'a');
                space++;
                }
            }
        while(28-space){
            cout<<" ";
            space++;
            }
        cout<<"|"<<endl;
        cout<<"+----------+----------------+-----------------------------+"<<endl;
        }
    return 0;
    }
