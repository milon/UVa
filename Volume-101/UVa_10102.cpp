//UVa Problem-10102(The path in the colored field)
//Accepted
//Running time: 0.052 sec

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    char c;
    int M,tmp,index_1,index_3,index;
    int color_1[10000][2],color_3[10000][2],answer[10000];
    while(cin>>M){
        index_1=0;index_3=0;
        for(int i=0;i<M;i++){
            for(int j=0;j<M;j++){
                cin>>c;
                tmp=c-48;
                if(tmp==1){
                    color_1[index_1][0]=i;
                    color_1[index_1++][1]=j;
                    }
                else if(tmp==3){
                    color_3[index_3][0]=i;
                    color_3[index_3++][1]=j;
                    }
                }
            }
        index=0;
        for(int i=0;i<index_1;i++){
            int min=10000;
            for(int j=0;j<index_3;j++){
                tmp=abs(color_1[i][0]-color_3[j][0])+abs(color_1[i][1]-color_3[j][1]);
                if(tmp<min)
                    min=tmp;
                }
            answer[index++]=min;
            }
        int max=0;
        for(int i=0;i<index;i++){
            if(answer[i]>max)
                max=answer[i];
            }
        cout<<max<<endl;
        }
    return 0;
    }
