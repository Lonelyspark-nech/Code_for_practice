#include<iostream>
using namespace std;

const int N=100000+10;

int q[N];

void quick_sort(int q[],int l,int r){
	if(l>=r)return;	
	int i=l-1,j=r+1;
	int mid=q[(l+r)/2];
		
	while(i<j){
		do i++;while(q[i]<mid);
		do j--;while(q[j]>mid);
		if(i<j)swap(q[i],q[j]);
	}

	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}

int main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%d",&q[i]);
	}
	int l=0,r=n-1;
	quick_sort(q,l,r);
	for(i=0;i<n;i++){
		printf("%d ",q[i]);
	}
}
