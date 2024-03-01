#include<iostream>
using namespace std;
const int N=100010;
int a[N],b[N];

int main(){
	int i,j,k,n,r=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]); 
	}
	for(j=0,i=1;i<=n;i++){
		if(b[a[i]]>j){
			r=max(r,i-j-1);
			j=b[a[i]];
		}
		b[a[i]]=i;
	}
	r=max(r,i-j-1);
	printf("%d",r);
	return 0;
}
