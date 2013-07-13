//UVa Problem-10651(Pebble Solitaire)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<string>
using namespace std;

int cnt;

void recursive(char a[]){
    char org[15];
    strcpy(org,a);
    for(int i=0;i<11;i++){
        if(a[i]=='o' && a[i+1]=='o'){
            if(i+2<12 && a[i+2]=='-'){
                a[i+2]='o';
                a[i]=a[i+1]='-';
                recursive(a);
                strcpy(a,org);
                }
            if(i-1>=0 && a[i-1]=='-'){
                a[i-1]='o';
                a[i]=a[i+1]='-';
                recursive(a);
                strcpy(a,org);
                }
            }
        }
    int suru=0;
    for(int i=0;i<12;i++)
        if(a[i]=='o')
            suru++;
    if(suru<cnt)
        cnt=suru;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        char input[15];
        cin>>input;
        cnt=100;
        recursive(input);
        cout<<cnt<<endl;
        }
    return 0;
    }
