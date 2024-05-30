#include<iostream>
#include<cstring>
using namespace std;

const int N=210;
int g[N][N];
int n,m,k;

void floyd(){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
			}
		}
	} 
}

int main(){
	scanf("%d%d%d",&n,&m,&k);
	memset(g,0x3f,sizeof g);
	for(int i=1;i<=n;i++)g[i][i]=0;
	for(int i=0;i<m;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		g[x][y]=min(g[x][y],z); 
	} 
	floyd();
	while(k--){
		int x,y;
		scanf("%d%d",&x,&y);
		if(g[x][y]>0x3f3f3f3f/2)puts("impossible");
		else printf("%d\n",g[x][y]); 
	}
}
