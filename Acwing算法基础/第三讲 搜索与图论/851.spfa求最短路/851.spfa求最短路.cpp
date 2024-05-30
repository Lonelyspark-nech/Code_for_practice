#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

const int N=100010;
int n,m;
int h[N],e[N],ne[N],w[N],idx;
int dis[N];
bool st[N];

void add(int x,int y,int z){
	e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int spfa(){
	memset(dis,0x3f,sizeof dis);
	dis[1]=0;
	queue<int>q;
	q.push(1);
	st[1]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		st[t]=false;
		for(int i=h[t];i!=-1;i=ne[i]){
			int j=e[i];
			if(dis[j]>dis[t]+w[i]){
				dis[j]=dis[t]+w[j];
				if(st[j]==false){
					q.push(j);
					st[j]=true;
				}
			}
		} 
	}
	return dis[n];
}

int main(){
	scanf("%d%d",&n,&m);
	memset(h,-1,sizeof h);
	while(m--){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(x,y,z); 
	}
	int res=spfa();
	if(res==0x3f3f3f3f)printf("impossible");
	else printf("%d",res);
	return 0; 
}
