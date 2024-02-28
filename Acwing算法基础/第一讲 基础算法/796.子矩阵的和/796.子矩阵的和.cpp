#include<iostream>
using namespace std;
const int N=1010,M=1010;
int a[N][M],b[N][M];

int query(int x1,int y1,int x2,int y2){
	return b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1];
}
int main(){
	int n,m,q,x1,y1,x2,y2;
	scanf("%d %d %d",&n,&m,&q);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);		 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			b[i][j]=a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1]; 
	}
	while(q--){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		printf("%d\n",query(x1,y1,x2,y2));
	}
	 return 0;
}
