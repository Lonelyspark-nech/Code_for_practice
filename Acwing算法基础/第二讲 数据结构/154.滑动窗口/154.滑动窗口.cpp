#include<iostream>
using namespace std;
const int N=1000010;
int q[N],a[N],hh=0,tt=-1;

int main(){
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	for(i=0,hh=0,tt=-1;i<n;i++){
		if(i>=q[hh]+k&&(tt-hh>=0))hh++;
		while(a[i]<a[q[tt]]&&(tt-hh>=0))tt--;
		q[++tt]=i;
		if(i-k+2>0)printf("%d ",a[q[hh]]);
	} 
	printf("\n");
	for(i=0,hh=0,tt=-1;i<n;i++){
		if(i>=q[hh]+k&&(tt-hh>=0))hh++;
		while(a[i]>a[q[tt]]&&(tt-hh>=0))tt--;
		q[++tt]=i;
		if(i-k+2>0)printf("%d ",a[q[hh]]);
	} 
} 
