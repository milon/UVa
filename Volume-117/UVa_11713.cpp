//UVa Problem-11713(Abstract Names)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char n1[210],n2[210];
    int kase,i,j,k,len1,len2;
    while(cin>>kase){
        for(j=1;j<=kase;j++){
            cin>>n1>>n2;
            len1=strlen(n1);
            len2=strlen(n2);
            k=0;
            if(len1!=len2)
                cout<<"No\n";
            else{
                for(i=0;i<len1;i++){
                    if((n1[i]=='a'||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u')&&
                       (n2[i]=='a'||n2[i]=='e'||n2[i]=='i'||n2[i]=='o'||n2[i]=='u'))
                            continue;
                    else if(n1[i]!=n2[i])
                        k++;
                    }
                if(k==0)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
                }
            }
        }
    return 0;
    }
