#include<iostream>
#define lie; {sum++;continue;}
using namespace std;
const int N=50010,K=100010;

int p[N],dis[N];

int find(int x){
	if(x<=n||x!=p[x])p[x]=find(p[x]);
	return p[x]; 
} 

int main(){
	int n,k,sum=0,d,x,y;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		p[i]=i;
		dis[i]=-1;
	}
	p[n+1]=0;
	p[n+2]=0;
	p[n+3]=0;
	
	while(k--){
		scanf("%d%d%d",&d,&x,&y);
		if(x>n||y>n)lie;
		else if(d==1){
			if(dis[x]<0||dis[y]<0){//未加入集合
				
				p[find(x)]=p[y];
				
			}
			else if(find(x)!=find(y))lie; 
		}
		else if(d==2){
			if(x==y)lie;
		}
	}
	printf("%d",sum);
	return 0; 
}
