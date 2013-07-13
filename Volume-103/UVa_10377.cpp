//UVa Problem-10377(Maze Traversal)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	char maze[60][60], ar[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		getchar();
		for(int x=0;x<a;x++){
			gets(ar);
			for(int y=0;y<b;y++)
				maze[x][y]=ar[y];
			}
		int face=0,x,y;		//0->N,1->E,2->S,3->W
		char c;
		cin>>x>>y;
		while(cin>>c){
			if(c=='Q')
				break;
			switch(c){
				case 'R':
					face=(face+1)%4;
					break;
				case 'L':
					face=face-1;
					if(face<0)
						face=3;
					break;
				case 'F':
					if(face==0){
						if(maze[x-1][y]!='*')
							x=x-1;
						}
					else if(face==1){
						if(maze[x][y+1]!='*')
							y=y+1;
						}
					else if(face==2){
						if(maze[x+1][y]!='*')
							x=x+1;
						}
					else if(face==3){
						if(maze[x][y-1]!='*')
							y=y-1;
						}
					break;
				default:
					break;
				}
			}
		cout<<x+1<<" "<<y+1<<" ";
		if(face==0)
			cout<<"N"<<endl;
		else if(face==1)
			cout<<"E"<<endl;
		else if(face==2)
			cout<<"S"<<endl;
		else
			cout<<"W"<<endl;
		if(i!=n-1)
			cout<<endl;
		}
	return 0;
	}
