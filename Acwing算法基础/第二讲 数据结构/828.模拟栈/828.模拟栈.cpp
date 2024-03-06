#include<iostream>
using namespace std;
const int N=100010;

int stk[N],idx=0;

void push(int x){
	stk[++idx]=x;
} 
void pop(){
	idx--;
}
void query(){
	printf("%d\n",stk[idx]); 
}
void empty(){
	if(idx)printf("NO\n");
	else printf("YES\n");
}
int main(){
	int m,x;
	string s;
	cin>>m;
	while(m--){
		cin>>s;
		if(s=="push"){
			cin>>x;
			push(x);
		}
		else if(s=="pop"){
			pop();
		}
		else if(s=="empty"){
			empty();
		}
		else if(s=="query"){
			query();
		}
	}
} 
