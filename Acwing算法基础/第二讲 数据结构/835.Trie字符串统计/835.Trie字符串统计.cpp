#include<iostream>
using namespace std;

const int M=100010;
int cnt[M], son[M][26],idx=0;
char str[M],op[2];

void insert(char s[]){
	int p=0;
	for(int i=0;s[i];i++){
		int u=s[i]-'a';
		if(!son[p][u])son[p][u]=++idx;
		p=son[p][u];
	}
	cnt[p]++;
}

int query(char s[]){
	int p=0;
	for(int i=0;s[i];i++){
		int u=s[i]-'a';
		if(!son[p][u])return 0;
		else p=son[p][u];
	}
	return cnt[p];
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s%s",op,str);
		if(op[0]=='I')insert(str);
		else printf("%d\n",query(str));
	}
	return 0;
} 
