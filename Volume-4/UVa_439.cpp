//UVa Problem-439(Knight Moves)
//Accepted
//Running time: 0.048 sec
//Author: Milon

#include<cstdio>
#include<climits>
using namespace std;

#define qmax 8
#define inf INT_MAX

typedef struct{
    int x,y;
    }chess;

int head,tail,color[qmax][qmax],d[qmax][qmax],a[64][64];
chess ch,q[64];

void enque(chess x){
    q[tail++]=x;
    if(tail==64)
        tail=0;
    }

chess deque(){
    chess x;
    x=q[head++];
    if(head==64)
        head=0;
    return x;
    }

void init(){
    for(int i=0;i<64;++i)
        for(int j=0;j<64;++j)
            a[i][j]=0;
    }

void adjacency(chess temp){
    int index,index1;
    chess ad[8];
    ad[0].x = temp.x + 2; ad[0].y = temp.y + 1;
	ad[1].x = temp.x + 2; ad[1].y = temp.y - 1;
	ad[2].x = temp.x - 2; ad[2].y = temp.y + 1;
	ad[3].x = temp.x - 2; ad[3].y = temp.y - 1;
	ad[4].x = temp.x + 1; ad[4].y = temp.y - 2;
	ad[5].x = temp.x + 1; ad[5].y = temp.y + 2;
	ad[6].x = temp.x - 1; ad[6].y = temp.y + 2;
	ad[7].x = temp.x - 1; ad[7].y = temp.y - 2;
	index1=(temp.x*8)+temp.y;
	for(int i=0;i<qmax;i++){
	    if(ad[i].x<8 && ad[i].x>-1 && ad[i].y<8 && ad[i].y>-1){
			index = (ad[i].x * 8)+ ad[i].y;
			a[index1][index] = 1;
            }
	    }
    }

void make_graph(){
    for(int i=0;i<qmax;i++)
        for(int j=0;j<qmax;j++){
            ch.x=i;
            ch.y=j;
            adjacency(ch);
            }
    }

void bfs(chess root,chess dest){
	int i,j,index,index1;
	chess u,v;
	head = tail = 0;
	for(i=0;i<qmax;++i){
		for (j=0;j<qmax;j++){
			color[i][j]=0;
			d[i][j]=inf;
            }
        }
	color[root.x][root.y] = 1;
	d[root.x][root.y] = 0;
	enque(root);
	while(head!=tail){
		u=deque();
		if((u.x==dest.x) && (u.y==dest.y))
			return;
		index=(u.x*8)+u.y;
		for(i=0;i<64;++i){
			if(a[index][i]){
				index1 = i;
				v.x = index1/8;
				v.y = index1-(v.x*8);
				if(color[v.x][v.y] == 0){
					color[v.x][v.y] = 1;
					d[v.x][v.y]=d[u.x][u.y] + 1;
					if((v.x==dest.x)&&(v.y == dest.y))
						 return;
					enque(v);
                    }
                }
            }
        }
    }

chess make_node(char *s){
	chess temp;
	temp.x = s[0]-'a';
	temp.y = s[1]-'0'-1;
	return temp;
    }

int main(){
	char so[3],de[3];
	int i,j;
	chess root,dest;
	while(scanf("%s %s",so,de)==2){
		root=make_node(so);
		dest=make_node(de);
		init();
		make_graph();
		bfs(root,dest);
		printf("To get from %s to %s ",so,de);
		printf("takes %d knight moves.\n",d[dest.x][dest.y]);
        }
	return 0;
    }
