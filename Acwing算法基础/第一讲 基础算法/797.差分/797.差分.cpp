#include<iostream>
using namespace std;
const int N=100010;
int a[N],b[N];
void insert(int l,int r,int c){
	b[l]+=c;
	b[r+1]-=c;
	return;
}

int main(){
	int n,m,l,r,c;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i]-a[i-1];	
	}
	while(m--){
		scanf("%d%d%d",&l,&r,&c);
		insert(l,r,c); 
	}
	for(int i=1;i<=n;i++){
		b[i]+=b[i-1];
		printf("%d ",b[i]);
	}
	return 0;
}
