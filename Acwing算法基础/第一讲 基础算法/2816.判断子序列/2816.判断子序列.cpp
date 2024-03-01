#include<iostream>
using namespace std;
const int N=100010;
int a[N],b[N];
int main(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<m;i++)scanf("%d",&b[i]);
	for(i=0,j=0;j<m;j++){
		if(a[i]==b[j])i++;
		while(i==n){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
} 
