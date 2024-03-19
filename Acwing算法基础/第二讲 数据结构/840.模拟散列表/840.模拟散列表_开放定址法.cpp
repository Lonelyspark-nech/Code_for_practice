#include<iostream>
#include<cstring>
#define null 0x3f3f3f3f

const int N=200003;
int h[N];


void insert(int x){
	int k=(x%N+N)%N;
	while(h[k]!=null)k=(k+1)%N;
	h[k]=x;
}
int find(int x){
	int k=(x%N+N)%N;
	while(h[k]!=null){
		if(h[k]==x)return k;
		k=(k+1)%N;
	}
	return k;
}

int main(){
	int n;
	scanf("%d",&n);
	memset(h,0x3f,sizeof h);
	while(n--){
		char op[5];
		int x;
		scanf("%s%d",op,&x);
		if(*op=='I')insert(x);
		else if(*op=='Q'){
			if(h[find(x)]!=null)printf("Yes\n");
			else printf("No\n");
		} 
	}
	return 0;
} 

