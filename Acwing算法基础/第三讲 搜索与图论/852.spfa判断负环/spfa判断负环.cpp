#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

const int N=2010,M=10010;
int e[M],ne[M],w[M],h[N],idx;
int dis[N],cnt[N];
bool st[N];
int n,m;

void add(int x,int y,int z){
	e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

bool spfa(){
	queue<int>q;
	for(int i=1;i<=n;i++){
		q.push(i);
		st[i]=true;
	}
	while(!q.empty()){
		int t=q.front();
		q.pop();
		st[t]=false;
		for(int j=h[t];j!=-1;j=ne[j]){
			int k=e[j];
			if(dis[k]>dis[t]+w[j]){
				cnt[k]=cnt[t]+1;
				dis[k]=dis[t]+w[j];
				if(cnt[k]>=n)return true;
				if(st[k]==false){
					q.push(k);
					st[k]=true;
				}
			}
		}
	}
	return false; 
}

int main(){
	scanf("%d%d",&n,&m);
	memset(h,-1,sizeof h);
	while(m--){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(x,y,z);
	}
	bool res=spfa();
	if(res==true)puts("Yes");
	else puts("No");
	return 0; 
} 
