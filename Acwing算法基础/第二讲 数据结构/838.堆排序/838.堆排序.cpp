#include<iostream>
using namespace std;
const int N=100010;
long long int h[N];
int n,m,cnt; 

void down(int x){
	int t=x;
	if(2*x<=cnt&&h[2*x]<h[x])t=2*x;
	if(2*x+1<=cnt&&h[2*x+1]<h[t])t=2*x+1;
	if(x!=t){
		swap(h[x],h[t]);
		down(t);
	}
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&h[i]);
	cnt=n;
	for(int i=n/2;i>=1;i--)down(i);
	while(m--){
		printf("%d ",h[1]);
		h[1]=h[cnt--];
		down(1);
	}
	return 0;
} 
