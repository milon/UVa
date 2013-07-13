//UVa Problem-11525(Permutation)
//Accepted
//Running time: 2.468 sec

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int k;
        scanf("%d",&k);
        vector<int> sequence;
        for(int i=1;i<=k;i++)
            sequence.push_back(i);
        bool suru=false;
        int input;
        for(int i=0;i<k;i++){
            scanf("%d",&input);
            if(suru)
                printf(" ");
            suru=true;
            printf("%d",sequence[input]);
            sequence.erase(sequence.begin()+input);
            }
        printf("\n");
        }
    return 0;
    }

