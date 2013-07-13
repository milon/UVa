//UVa Problem-608(Counterfeit Dollar)
//Accepted
//Running time: 0.316 sec
//Author: Milon

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int x=0;x<n;++x){
        bool bSolved=false;
        int w[128]={0};
        string left[3];
        string right[3];
        string state[3];
        for(int y=0;y<3;++y){
            cin>>left[y]>>right[y]>>state[y];
            }
        for(int c='A';c<='L' && !bSolved;++c){
            for(int l=0;l<2;++l){
                for(int d='A';d<='L';++d){
                    w[d]=2;
                    }
                w[c]=(l==0?1:3);
                bool bOk=true;
                for(int i=0;i<3;++i){
                    int left_w=0;
                    int right_w=0;
                    for(int j=0;j<left[i].length();++j){
                        left_w+=w[left[i][j]];
                        }
                    for(int j=0;j<right[i].length();++j){
                        right_w+=w[right[i][j]];
                        }
                    if(state[i]=="even"){
                        if(!(left_w==right_w)){
                            bOk=false;
                            break;
                            }
                        }
                    else if(state[i]=="up"){
                        if(!(left_w>right_w)){
                            bOk=false;
                            break;
                            }
                        }
                    else{
                        if(!(left_w<right_w)){
                            bOk=false;
                            break;
                            }
                        }
                    }
                if(bOk){
                    bSolved=true;
                    break;
                    }
                }
            }
        for(int c='A';c<='L';++c){
            if(w[c]!=2){
                printf("%c is the counterfeit coin and it is %s.\n",c,w[c]<2?"light":"heavy");
                }
            }
        }
    return 0;
    }
