#include<iostream>
using namespace std;
int main(){
	int n,m;
	bool flag=true;
	while(cin>>n>>m){
		n=n*m;
		m=m-1;
		if(flag){
			if(n==0&&m<=0)cout<<"0 0";
			else cout<<n<<' '<<m;
			flag=false;
		}
		else{
			if(!(n==0&&m<=0)){
				cout<<' ';
				cout<<n<<' '<<m;
			}
		}
	}
} 
