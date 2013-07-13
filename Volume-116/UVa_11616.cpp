//UVa Problem-11616(Roman Numerals)
//Accepted
//Running time: 0.088 sec

#include<iostream>
#include<cstdlib>
#include<string>
#include<cctype>
using namespace std;

string romanNumerals[4000+5]={"0","I","II","III","IV","V","VI","VII","VIII","IX","X"};

int main(){
    for(int i=11;i<4000;i++){
        int tmp=i;
        while(tmp){
            if(tmp>=900 && tmp<4000){
                if(tmp/100==9){
                    romanNumerals[i]+="CM";
                    tmp-=900;
                    }
                else{
                    romanNumerals[i]+="M";
                    tmp-=1000;
                    }
                }
            if(tmp>=400 && tmp<900){
                if(tmp/100==4){
                    romanNumerals[i]+="CD";
                    tmp-=400;
                    }
                else{
                    romanNumerals[i]+="D";
                    tmp-=500;
                    }
                }
            if(tmp>=90 && tmp<400){
                if(tmp/10==9){
                    romanNumerals[i]+="XC";
                    tmp-=90;
                    }
                else{
                    romanNumerals[i]+="C";
                    tmp-=100;
                    }
                }
            if(tmp>=40 && tmp<90){
                if(tmp/10==4){
                    romanNumerals[i]+="XL";
                    tmp-=40;
                    }
                else{
                    romanNumerals[i]+="L";
                    tmp-=50;
                    }
                }
            if(tmp>=1 && tmp<40){
                for(int j=10;j>=1;j--)
                    if(tmp>=j){
                        romanNumerals[i]+=romanNumerals[j];
                        tmp-=j;
                        break;
                        }
                }
            }
        }
    string inp;
    while(cin>>inp){
        if(isdigit(inp[0]))
            cout<<romanNumerals[atoi(inp.c_str())]<<endl;
        else {
            for(int i=1;i<4000;i++){
                if(romanNumerals[i]==inp){
                    cout<<i<<endl;
                    break;
                    }
                }
            }
        }
    return 0;
    }
