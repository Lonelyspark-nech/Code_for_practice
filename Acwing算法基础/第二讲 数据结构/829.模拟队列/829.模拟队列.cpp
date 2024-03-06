#include<iostream>
using namespace std;
const int N=100010;
int q[N],hh=1,tt=0;

void push(int x){
	q[++tt]=x;
}
void pop(){
	hh++;
}
void query(){
	cout<<q[hh]<<endl;
}
void empty(){//YES是队空，NO是队不空 
	if(tt<hh)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
		else if(s=="pop")pop();
		else if(s=="query")query();
		else if(s=="empty")empty();
	}
	return 0;
} 
