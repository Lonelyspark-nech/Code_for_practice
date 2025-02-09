#include<iostream>
using namespace std;

void reverse(int a[],int l,int r){
	if(l>=r)return;
	int t,mid;
	mid=(l+r)/2;
	for(int i=l;i<=mid;i++){
		t=a[i];
		a[i]=a[l+r-i];
		a[l+r-i]=t;
	}
}

int a[105];
int main(){
	int m,n;
	cin>>n>>m;
	m=m%n;
	for(int i=0;i<n;i++)cin>>a[i];
	reverse(a,0,n-1);
	reverse(a,0,m-1);
	reverse(a,m,n-1);
	bool flag=true;
	for(int i=0;i<n;i++){
		if(flag)flag=false;
		else cout<<' ';
		cout<<a[i];
	}
} 
