#include<iostream>
using namespace std;

const int N=10;
int n; 
char field[N][N];
bool column[N],diagnoal[2*N],sub_diagnoal[2*N];

void dfs(int r){
	if(r==n){
		for(int i=0;i<n;i++)puts(field[i]);
		puts("");
		return;
	}
	for(int i=0;i<n;i++){
		if(field[r][i]=='.'&&!column[i]&&!diagnoal[n+i-r]&&!sub_diagnoal[i+r]){
			field[r][i]='Q';
			column[i]=diagnoal[n+i-r]=sub_diagnoal[i+r]=true;
			dfs(r+1);
			field[r][i]='.';
			column[i]=diagnoal[n+i-r]=sub_diagnoal[i+r]=false;
		}
	} 
} 

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			field[i][j]='.';
		} 
	}
	dfs(0);
	return 0;
} 
