#include<iostream>
#include<math.h>
using namespace std;

const int N=100010,pp=131;
unsigned long long int h[N],p[N];
char s[N];

int cal(int l,int r){
	return h[r]-h[l-1]*p[r-l+1];
}

int main(){
	int n,m;
	scanf("%d%d%s",&n,&m,s+1);
	p[0]=1,h[0]=0;
	for(int i=1;i<=n;i++){
		p[i]=p[i-1]*pp;
		h[i]=h[i-1]*pp+s[i];
	}
	while(m--){
		int l1,r1,l2,r2;
		scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
		if(cal(l1,r1)==cal(l2,r2))puts("Yes");
		else puts("No");
	}
	return 0;
}
