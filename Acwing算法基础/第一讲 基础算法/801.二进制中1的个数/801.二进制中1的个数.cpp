#include<iostream>
using namespace std;
const int N=100010;
int a[N]; 
int lowbit(int a){
	return a&-a;
}

int main(){
	int r,n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0,r=0;i<n;i++,r=0){
		while(x=lowbit(a[i])){
			r++;
			a[i]-=x;
		}
		printf("%d ",r);
	}
}
