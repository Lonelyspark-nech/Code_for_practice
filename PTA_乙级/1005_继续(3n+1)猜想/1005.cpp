#include<iostream>
using namespace std;
bool state[1000];
bool iskey[1000];
int main(){
	int k,t;
	cin>>k;
	while(k--){
		cin>>t;
		if(state[t]==0){
			state[t]=1;
			iskey[t]=1;
		}
		while(t!=1){
			if(t%2==0)t=t/2;
			else t=(3*t+1)/2;
			if(state[t]==1){
				if(iskey[t]==1)iskey[t]=0;
				break;
			}
			else state[t]=1;
		}
	}
	bool flag=1;
	for(int i=100;i>1;i--){
		if(iskey[i]){
			if(flag)flag=0;
			else cout<<' ';
			cout<<i;
		}
	}
} 
