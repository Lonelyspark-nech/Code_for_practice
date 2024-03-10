#include<iostream>
using namespace std;
const int N=100010,M=1000010;
char p[N],s[M];
int ne[N];


int main(){
	int n,m,i,j;
	cin>>n>>p+1>>m>>s+1;
	for(i=2,j=0;i<=n;i++){
		while(j&&p[j+1]!=p[i])j=ne[j];
		if(p[j+1]==p[i])j++;
		ne[i]=j;
	}

	for(i=1,j=0;i<=m;i++){
		while(j&&p[j+1]!=s[i])j=ne[j];
		if(p[j+1]==s[i])j++;
		if(j==n){
			printf("%d ",i-j);
			j=ne[j];
		}
	}
	return 0;	
}
