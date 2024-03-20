#include<iostream>
using namespace std;
const int N=10;
int n;
int r[N];
bool d[N];

void dfs(int t){
	if(t>n){
		for(int i=1;i<=n;i++)printf("%d ",r[i]);
		puts("");
		return; 
	}
	for(int i=1;i<=n;i++){
		if(!d[i]){
			d[i]=true;
			r[t]=i;
			dfs(t+1);
			d[i]=false;
		}
	} 
}

int main(){
	scanf("%d",&n);
	dfs(1);
	return 0;
} 
