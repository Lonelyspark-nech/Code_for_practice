#include<iostream>
using namespace std;
const int N=100010;
int p[N],capacity[N];

int find(int x){
	if(x!=p[x])p[x]=find(p[x]);
	return p[x]; 
}


int main(){
	int n,m,a,b;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		p[i]=i;
		capacity[i]=1;
	}
	char op[5];
	while(m--){
		scanf("%s",op);
		if(op[0]=='C'){
			scanf("%d%d",&a,&b);
			if(find(a)!=find(b)){
				capacity[find(b)]+=capacity[find(a)];
				p[find(a)]=find(b);
			}
		} 
		else if(op[0]=='Q'){
			if(op[1]=='1'){
				scanf("%d%d",&a,&b);
				if(find(a)==find(b))puts("Yes");
				else puts("No");
			}
			else if(op[1]=='2'){
				scanf("%d",&a);
				printf("%d\n",capacity[find(a)]);
			}
		}
	}
	return 0;
}
