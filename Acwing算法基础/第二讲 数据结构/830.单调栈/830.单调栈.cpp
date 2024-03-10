#include<iostream>
using namespace std;
const int N=100010;
int a[N],idx=0;
int main(){
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		while(idx&&a[idx]>=x)idx--;
		if(!idx)printf("-1 ");
		else printf("%d ",a[idx]);
		a[++idx]=x;
	} 
}
