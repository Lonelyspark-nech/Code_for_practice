#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

const int N=150010;

typedef pair<int,int> PII;
int h[N],e[N],ne[N],w[N],idx;
int n,m,dis[N];
bool st[N];


void add(int a,int b,int c){
	e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}

int dijkstra(){
	memset(dis,0x3f,sizeof dis);
	priority_queue<PII,vector<PII>,greater<PII>>heap;
	heap.push({0,1});
	dis[1]=0;
	while(!heap.empty()){
		PII t=heap.top();
		heap.pop();
		int distance=t.first,ver=t.second;
		if(st[ver])continue;
		st[ver]=true;
		
		for(int i=h[ver];i!=-1;i=ne[i]){
			if(dis[e[i]]>distance+w[i]){
				dis[e[i]]=distance+w[i];
				heap.push({dis[e[i]],e[i]});
			}
		} 
	}
	if(dis[n]==0x3f3f3f3f)return -1;
	else return dis[n];
}

int main(){
	scanf("%d%d",&n,&m);
	memset(h,-1,sizeof h);
	while(m--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		add(a,b,c);
	}
	printf("%d",dijkstra());
	return 0; 
} 
