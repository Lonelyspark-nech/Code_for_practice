#include<iostream>
using namespace std;
const int N=100010;
int a[N],b[N];
int main(){
	int n,m,x,i,j,r;
	scanf("%d%d%d",&n,&m,&x);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0,j=m-1;i<n;i++){
		while(j>=0&&a[i]+b[j]>x)j--;
		if(j>=0&&a[i]+b[j]==x){
			printf("%d %d",i,j);
			return 0;
		}
	}
} 
