#include<iostream>
using namespace std;

const int N=1e5+10;
int a[N];

int binary_serch_left(int a[],int l,int r,int k){//答案区间左边，也称右区间起点 
	if(l>=r)return r;
	int mid=(l+r)/2;
	if(a[mid]<k)binary_serch_left(a,mid+1,r,k);
	else binary_serch_left(a,l,mid,k);
}

int binary_serch_right(int a[],int l,int r,int k){//答案区间右边，也称左区间终点 
	if(l>=r)return l;
	int mid=(l+r)/2+1;
	if(a[mid]>k)binary_serch_right(a,l,mid-1,k);
	else binary_serch_right(a,mid,r,k);
}

 
int main(){
	int n,q,k,i;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	while(q--){
		scanf("%d",&k);
		int l=binary_serch_left(a,0,n-1,k);
		int r=binary_serch_right(a,0,n-1,k);
		if(a[l]!=k)printf("-1 -1\n");
		else printf("%d %d\n",l,r);
	}

	return 0;
}
