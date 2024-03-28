#include<iostream>
#include<cstring>
using namespace std;
const int N=100010;

int q[N],hh=0,tt=-1;
int h[N],e[N],ne[N],idx;
int d[N];
int n,m;

void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
	d[b]++;
}
bool topsort(){
	for(int t=1;t<=n;t++){
		if(d[t]==0)q[++tt]=t;
	}
	while(hh<=tt){
		int t=q[hh++];
		for(int i=h[t];i!=-1;i=ne[i]){
			d[e[i]]--;
			if(d[e[i]]==0)q[++tt]=e[i];
		}
	} 
	return(tt==n-1); 
}


int main(){
	scanf("%d%d",&n,&m);
	memset(h,-1,sizeof h);
	while(m--){
		int a,b;
		scanf("%d%d",&a,&b);
		add(a,b);
	} 
	if(topsort()){
		for(int i=0;i<n;i++)printf("%d ",q[i]);
	}
	else printf("-1");
	return 0; 
} 
