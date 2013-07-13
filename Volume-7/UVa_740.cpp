//UVa Problem-740(Baudot Data Communication Code)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

char down_shift(char x[]){
    if ( strcmp ("00000", x) == 0 )
        return '<';
    if ( strcmp ("00001", x) == 0 )
        return 'T';
    if ( strcmp ("00010", x) == 0 )
        return '*';
    if ( strcmp ("00011", x) == 0 )
        return 'O';
    if ( strcmp ("00100", x) == 0 )
        return ' ';
    if ( strcmp ("00101", x) == 0 )
        return 'H';
    if ( strcmp ("00110", x) == 0 )
        return 'N';
    if ( strcmp ("00111", x) == 0 )
        return 'M';
    if ( strcmp ("01000", x) == 0 )
        return '=';
    if ( strcmp ("01001", x) == 0 )
        return 'L';
    if ( strcmp ("01010", x) == 0 )
        return 'R';
    if ( strcmp ("01011", x) == 0 )
        return 'G';
    if ( strcmp ("01100", x) == 0 )
        return 'I';
    if ( strcmp ("01101", x) == 0 )
        return 'P';
    if ( strcmp ("01110", x) == 0 )
        return 'C';
    if ( strcmp ("01111", x) == 0 )
        return 'V';
    if ( strcmp ("10000", x) == 0 )
        return 'E';
    if ( strcmp ("10001", x) == 0 )
        return 'Z';
    if ( strcmp ("10010", x) == 0 )
        return 'D';
    if ( strcmp ("10011", x) == 0 )
        return 'B';
    if ( strcmp ("10100", x) == 0 )
        return 'S';
    if ( strcmp ("10101", x) == 0 )
        return 'Y';
    if ( strcmp ("10110", x) == 0 )
        return 'F';
    if ( strcmp ("10111", x) == 0 )
        return 'X';
    if ( strcmp ("11000", x) == 0 )
        return 'A';
    if ( strcmp ("11001", x) == 0 )
        return 'W';
    if ( strcmp ("11010", x) == 0 )
        return 'J';
    if ( strcmp ("11100", x) == 0 )
        return 'U';
    if ( strcmp ("11101", x) == 0 )
        return 'Q';
    if ( strcmp ("11110", x) == 0 )
        return 'K';
    }

char up_shift(char x[]){
    if ( strcmp ("00000", x) == 0 )
        return '>';
    if ( strcmp ("00001", x) == 0 )
        return '5';
    if ( strcmp ("00010", x) == 0 )
        return '@';
    if ( strcmp ("00011", x) == 0 )
        return '9';
    if ( strcmp ("00100", x) == 0 )
        return ' ';
    if ( strcmp ("00101", x) == 0 )
        return '%';
    if ( strcmp ("00110", x) == 0 )
        return ',';
    if ( strcmp ("00111", x) == 0 )
        return '.';
    if ( strcmp ("01000", x) == 0 )
        return '+';
    if ( strcmp ("01001", x) == 0 )
        return ')';
    if ( strcmp ("01010", x) == 0 )
        return '4';
    if ( strcmp ("01011", x) == 0 )
        return '&';
    if ( strcmp ("01100", x) == 0 )
        return '8';
    if ( strcmp ("01101", x) == 0 )
        return '0';
    if ( strcmp ("01110", x) == 0 )
        return ':';
    if ( strcmp ("01111", x) == 0 )
        return ';';
    if ( strcmp ("10000", x) == 0 )
        return '3';
    if ( strcmp ("10001", x) == 0 )
        return '"';
    if ( strcmp ("10010", x) == 0 )
        return '$';
    if ( strcmp ("10011", x) == 0 )
        return '?';
    if ( strcmp ("10100", x) == 0 )
        return '#';
    if ( strcmp ("10101", x) == 0 )
        return '6';
    if ( strcmp ("10110", x) == 0 )
        return '!';
    if ( strcmp ("10111", x) == 0 )
        return '/';
    if ( strcmp ("11000", x) == 0 )
        return '-';
    if ( strcmp ("11001", x) == 0 )
        return '2';
    if ( strcmp ("11010", x) == 0 )
        return '\'';
    if ( strcmp ("11100", x) == 0 )
        return '7';
    if ( strcmp ("11101", x) == 0 )
        return '1';
    if ( strcmp ("11110", x) == 0 )
        return '(';
    }

int main(){
    char down[35];
    gets(down);
    char up[35];
    gets(up);
    char input[85];
    while(gets(input)){
        int length=strlen(input);
        bool flag_down=true;
        for(int i=0;i<length;i+=5){
            char temp[6];
            temp[0]=input[i];
            temp[1]=input[i+1];
            temp[2]=input[i+2];
            temp[3]=input[i+3];
            temp[4]=input[i+4];
            temp[5]=0;
            if(strcmp(temp,"11111")==0)
                flag_down=false;
            else if(strcmp(temp,"11011")==0)
                flag_down=true;
            else{
                if(flag_down)
                    printf("%c",down_shift(temp));
                else
                    printf("%c",up_shift(temp));
                }
            }
        printf("\n");
        }
    return 0;
    }
