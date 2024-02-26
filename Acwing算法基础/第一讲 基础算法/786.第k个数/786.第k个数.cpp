#include<iostream>
using namespace std;

const int N=100000+10;
int a[N];

void quick_sort(int a[],int l,int r){
	if(l>=r)return; 
	int i=l-1,j=r+1,mid=a[(l+r)/2];
	while(i<j){
		do i++;while(a[i]<mid);
		do j--;while(a[j]>mid);
		if(i<j)swap(a[i],a[j]);
	} 
	quick_sort(a,l,j);
	quick_sort(a,j+1,r);
}

int main(){
	int n,k,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n-1);
	printf("%d",a[k-1]);
}
