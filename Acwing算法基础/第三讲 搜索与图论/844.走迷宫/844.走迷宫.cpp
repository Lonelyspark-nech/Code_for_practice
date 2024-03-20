#include<iostream>
#include<cstring> 
using namespace std;

typedef pair<int,int>PII; 
const int N=110;
int field[N][N],path[N][N];
int n,m,hh=1,tt=0;
PII q[N*N];

int push(int x,int y){
	q[++tt]={x,y}; 
} 
PII pop(){
	if(hh<=tt)return q[hh++];
}
int px[5]={-1,1,0,0},py[5]={0,0,-1,1};

int bfs(){
	memset(path,-1,sizeof path);
	path[0][0]=0;
	push(0,0);
	while(hh<=tt){
		PII loc=pop();
		for(int i=0;i<4;i++){
		int nx=loc.first+px[i],ny=loc.second+py[i];
		if(nx>=0&&nx<n&&ny>=0&&ny<m&&field[nx][ny]==0&&path[nx][ny]==-1){
			push(nx,ny);
			path[nx][ny]=path[loc.first][loc.second]+1; 
			}
		}	
	}
	return path[n-1][m-1];
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&field[i][j]); 
		}
	}
	int res=bfs();
	printf("%d",res);
	return 0;
} 
