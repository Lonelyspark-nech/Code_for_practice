#include<iostream>
#include<cstring>
using namespace std;
const int N=100010;
int n;
int h[N],e[N*2],ne[N*2],idx;
int ans=N;
int d[N];

void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

int dfs(int x){
    d[x]=1;
	int res=0;
	int size=0;
	for(int i=h[x];i!=-1;i=ne[i]){
		if(d[e[i]]==0){
			int subtree=dfs(e[i]);
			res=max(res,subtree);
			size+=subtree;
		}
	}
	res=max(res,n-size-1);
	ans=min(ans,res);
	return size+1;
}

int main(){
	scanf("%d",&n);
	memset(h,-1,sizeof h);
	for(int i=0;i<n-1;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		add(a,b);
		add(b,a);
	}
	dfs(1);
	printf("%d",ans);
	return 0;
}

