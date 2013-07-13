//UVa Problem-10780(Again Prime? No time.)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

#define P_MAX 5000

int ver[P_MAX+3]={0};
int prs[P_MAX+3];
int divs[2000][2];

int generate(int limit) {
    int i, j, k=0;
    for(i=4;i<=limit;i+=2){
        ver[i]=1;
        }
    for(i=3;i<=limit;i+=2){
        for(j=i*i;j>0 && j<=limit;j+=i*2) {
            ver[j]=1;
            }
        }
    for(i=2;i<=limit;i++){
        if(!ver[i])
            prs[k++]=i;
        }
    return k;
    }

int get(int n, int p){
    int count=0, m=p;
    while(n/m>0){
        count += n/m;
        m*=p;
        }
    return count;
    }

int main(){
    int test, m, n, dc, res, tmp_m, tmp_n;
    int kount=1, i, p=generate(P_MAX), mx_n, mx_m;
    cin>>test;
    while(test--){
        cin>>m>>n;
        cout<<"Case "<<kount++<<":"<<endl;
        mx_m = 99999;
        for(i=0,tmp_m=m,tmp_n=n,dc=0;i<p && prs[i]<=m;i++){
            if(tmp_m%prs[i]==0){
                divs[dc][0]=prs[i];
                divs[dc][1]=0;
                while(tmp_m%prs[i]==0){
                    divs[dc][1]++;
                    tmp_m/=prs[i];
                    }
                dc++;
                }
            }
        if(tmp_m>1){
            divs[dc][0] = tmp_m;
            divs[dc][1] = 1;
            dc++;
            }
        mx_n = 99999;
        for(i=0;i<dc;i++){
            res=get(tmp_n,divs[i][0]);
            mx_n=min(mx_n,res/divs[i][1]);
            if(res<divs[i][1])
                break;
            }
        if(i<dc)
            cout<<"Impossible to divide"<<endl;
        else
            cout<<(int)mx_n<<endl;
        }
    return 0;
    }
