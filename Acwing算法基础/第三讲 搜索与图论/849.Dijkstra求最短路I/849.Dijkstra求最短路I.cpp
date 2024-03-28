#include<iostream>
#include<cstring>
using namespace std;
const int N=510;
int G[N][N];
int n,m;
int dis[N],st[N];

void add(int a,int b,int c){
	if(a==b)return;
	if(G[a][b]>c)G[a][b]=c;
}

int dijkstra(){
	memset(dis,0x3f,sizeof dis);
	dis[1]=0;
	st[1]=true;
	int t=1;
	for(int i=1;i<n;i++){
		int s=-1;
		int mindis=0x3f3f3f3f;
		for(int j=1;j<=n;j++){
			if(G[t][j]<mindis&&st[j]==false){
			    mindis=G[t][j];
			    s=j;
			}
		}
		if(G[t][s]=0x3f3f3f3f)return -1;
		st[s]=true;
		dis[s]=dis[t]+G[t][s];
		for(int i=1;i<=n;i++){
		    if(dis[i]>dis[s]+G[s][i])dis[i]=dis[s]+G[s][i];
		}
		t=s;
	}
	return dis[n];
}


int main(){
	scanf("%d%d",&n,&m);
	memset(G, 0x3f,sizeof G);
	while(m--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		add(a,b,c); 
	}
	printf("%d",dijkstra());
	return 0;
} 
