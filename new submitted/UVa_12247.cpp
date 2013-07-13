//UVa Problem-12247(Jollo)
//Accepted
//Running time: 0.032 sec
//

#include<set>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

bool check(int A[],int B[]){
    sort(A,A+3);
    bool flag=true;
    do{
        sort(B,B+3);
        do{
            int C=0;
            for(int j=0;j<3;j++){
                if(A[j]<B[j])
                    ++C;
                }
            if(C<2)
                flag=false;
            }while(next_permutation(B,B+3));
        }while(next_permutation(A,A+3));
    return flag;
    }

int main(){
    while(true){
        int X[3],Y[3],i;
        cin>>X[0]>>X[1]>>X[2]>>Y[0]>>Y[1];
        if(!X[0] && !X[1] && !X[2] && !Y[0] && !Y[1])
            break;
        set<int>S;
        S.insert(X[0]);
        S.insert(X[1]);
        S.insert(X[2]);
        S.insert(Y[0]);
        S.insert(Y[1]);
        bool flag = false;
        for(i=1;i<53;i++){
            if(S.find(i)!=S.end())
                continue;
            Y[2]=i;
            int A[3],B[3];
            for(int i=0;i<3;i++){
                A[i]=X[i];
                B[i]=Y[i];
                }
            if(check(A,B)){
                flag=true;
                break;
                }
            }
        if(flag)
            cout<<i<<endl;
        else
            cout<<"-1"<<endl;
        }
    return 0;
    }
