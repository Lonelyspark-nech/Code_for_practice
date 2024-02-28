#include<iostream>
using namespace std;
const int N=100010;
int a[N],b[N];

int query(int l,int r){
	return(b[r]-b[l-1]);
}

int main(){
	int n,m,l,r;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)b[i]=b[i-1]+a[i];
	
	while(m--){
		scanf("%d %d",&l,&r);
		printf("%d\n",query(l,r));
	}
	return 0;
} 
