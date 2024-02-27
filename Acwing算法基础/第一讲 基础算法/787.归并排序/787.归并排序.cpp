#include<iostream>
using namespace std;
const int N=100000+10;
int a[N],b[N];

void merge_sort(int a[],int l,int r){
	if(l>=r)return;
	int mid=(r+l)/2;
	int i=l,j=mid+1,k=0;
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r); 
	while(i<=mid&&j<=r){
		if(a[i]<=a[j])b[k++]=a[i++];
		else b[k++]=a[j++];
	}
	while(i<=mid)b[k++]=a[i++];
	while(j<=r)b[k++]=a[j++];
	for(i=l,j=0;i<=r;i++){
		a[i]=b[j++];
	}
}

int main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
	return 0;
}
