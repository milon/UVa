//UVa Problem-11760(Brother Arif, Please feed us!)
//Accepted
//Running time: 0.060 sec

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int r,c,n,kase=0;
    bool row[10000+5],col[10000+5];
    while(cin>>r>>c>>n && r && c && n){
        memset(row,false,sizeof(row));
        memset(col,false,sizeof(col));
        int r1,c1;
        for(int i=0;i<n;i++){
            cin>>r1>>c1;
            row[r1]=col[c1]=true;
            }
        cin>>r1>>c1;
        bool suru=false;
        if(r1-1>=0 && !(row[r1-1] || col[c1]))
            suru=true;
        else if(r1+1<r && !(row[r1+1] || col[c1]))
			suru=true;
		else if(c1-1>=0 && !(row[r1]|| col[c1-1]))
			suru=true;
		else if(c1+1<c && !(row[r1] || col[c1+1]))
			suru=true;
		else if(!(row[r1] || col[c1]))
			suru=true;
        if(suru)
            cout<<"Case "<<++kase<<": Escaped again! More 2D grid problems!"<<endl;
        else
            cout<<"Case "<<++kase<<": Party time! Let's find a restaurant!"<<endl;
        }
    return 0;
    }
