//UVa Problem-11223(O: dah, dah, dah!)
//Accepted
//Running time: 0.016 sec

#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int array[] = {1, 2, 4, 8, 16, 32, 64};
int morse[] = {'E', 'T', 'I', 'N', 'A', 'M', 'S', 'D', 'R', 'G',
               'U', 'K', 'W', 'O', 'H', 'B', 'L', 'Z', 'F', 'C',
               'P', ' ', 'V', 'X', ' ', 'Q', ' ', 'Y', 'J', ' ',
               '5', '6', '&', '7', ' ', ' ', ' ', '8', ' ', '/',
               '+', ' ', ' ', '(', ' ', '9', '4', '=', ' ', ' ',
               ' ', ' ', ' ', ' ', '3', ' ', ' ', ' ', '2', ' ',
               '1', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':',
               ' ', ' ', ' ', ' ', '?', ' ', ' ', ' ', ' ', ' ',
               '"', ' ', ' ', ';', '@', ' ', ' ', ' ', ' ', ' ',
               ' ', ' ', '\'', ' ', ' ', '-', ' ', ' ', ' ', ' ',
               ' ', ' ', ' ', ' ', '.', ' ', '_', ')', ' ', ' ',
               ' ', ' ', ' ', ',', ' ', '!'};

int main(){
    int n;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++){
        char str[2000];
        cin.getline(str, 2000, '\n');
        if(i!=1)
            cout<<endl;
        cout<<"Message #"<<i<<endl;
        int length=strlen(str);
        int cnt=0,num=0;
        bool suru=false;
        for(int j=0;j<length;j++){
            if(str[j]=='.'){
                num+=array[cnt]*1;
                cnt++;
                }
            else if(str[j]=='-'){
                num+=array[cnt]*2;
                cnt++;
                }
            else if(str[j]==' '){
                if(num>0){
                    cout<<(char)morse[num-1];
                    suru=true;
                    num=0;
                    cnt=0;
                    }
                else if(num==0){
                    if(suru==true){
                        cout<<' ';
                        suru=false;
                        }
                    else
                        suru=true;
                    }
                }
            }
        if(num!=0)
            cout<<(char)morse[num-1]<<endl;
        else
            cout<<endl;
        }
    return 0;
    }
