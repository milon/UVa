//UVa Problem-263(Number Chains)
//Accepted
//Running time: 0.368 sec
//Author: Milon

#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int n;
    while(cin>>n && n){
        char num[20];
        int clen=1;
        sprintf(num,"%d",n);
        cout<<"Original number was "<<n<<endl;
        sort(num,num+strlen(num));
        char num2[20];
        strcpy(num2,num);
        reverse(num2,num2+strlen(num2));
        int first=atoi(num2);
        int second=atoi(num);
        int sub=first-second;
        cout<<first<<" - "<<second<<" = "<<sub<<endl;
        map<int,bool>m;
        while(m[sub]==false){
            m[sub]=true;
            sprintf(num,"%d",sub);
            sort(num,num+strlen(num));
            strcpy(num2,num);
            reverse(num2,num2+strlen(num2));
            first=atoi(num2);
            second=atoi(num);
            sub=first-second;
            cout<<first<<" - "<<second<<" = "<<sub<<endl;
            clen++;
            }
        cout<<"Chain length "<<clen<<endl<<endl;
        }
    return 0;
    }
