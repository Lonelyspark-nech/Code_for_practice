#include<iostream>
#include<cstring>

const int N=510,M=10010;
int n,m,k;
struct Edge{
	int x,y,z;
}edge[M];
int dis[N],backup[N];

int bellman_ford(){
	memset(dis,0x3f,sizeof dis);
	dis[1]=0;
	for(int i=0;i<k;i++){
		memcpy(backup,dis,sizeof dis);
		for(int j=0;j<m;j++){
			int x=edge[j].x,y=edge[j].y,z=edge[j].z;
			if(dis[y]>backup[x]+z)dis[y]=backup[x]+z;
		}
	}
	return dis[n];
}

int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		edge[i].x=x,edge[i].y=y,edge[i].z=z; 
	}
	int res=bellman_ford();
	
	if(res>0x3f3f3f3f/2)puts("impossible");
	else printf("%d\n",res);
} 
