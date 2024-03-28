#include<iostream>
#include<cstring>
using namespace std;
const int N=100010;
int n,m;
int h[N],e[N],ne[N],idx;
int q[N],d[N];

void add(int a,int b){
	e[idx]=b;ne[idx]=h[a],h[a]=idx++;
}
int bfs(){
	int hh=0,tt=-1;
	q[++tt]=1,d[1]=0;
	while(hh<=tt){
		int t=q[hh++];
		for(int i=h[t];i!=-1;i=ne[i]){
			if(d[e[i]]==-1){
				q[++tt]=e[i];
				d[e[i]]=d[t]+1;
			}
		}
	}
	return d[n];
}

int main(){
	scanf("%d%d",&n,&m);
	memset(h,-1,sizeof h);
	memset(d,-1,sizeof d);
	while(m--){
		int a,b;
		scanf("%d%d",&a,&b); 
		add(a,b);
	}

	int res=bfs();
	printf("%d",res);
	return 0; 
}
