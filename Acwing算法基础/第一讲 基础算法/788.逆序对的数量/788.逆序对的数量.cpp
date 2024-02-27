#include<iostream>
using namespace std;

const int N=100000+10;
int a[N],b[N];
long long int result=0;

void merge_sort(int a[],int l,int r){
	if(l>=r)return;
	int mid=(l+r)/2;
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);
	
	int i=l,j=mid+1,k=0;
	while(i<=mid&&j<=r){
		if(a[i]<=a[j])b[k++]=a[i++];
		else {
			result+=mid-i+1;
			b[k++]=a[j++];	
		}
	}
	while(i<=mid)b[k++]=a[i++];
	while(j<=r)b[k++]=a[j++];
	for(i=l,k=0;i<=r;i++){
		a[i]=b[k++];
	}	
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	merge_sort(a,0,n-1);
	printf("%lld",result);
	return 0;
}
