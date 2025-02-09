#include<iostream>
using namespace std;
int main(){
	int num0,numnon0;
	bool flag=false;
	cin>>num0;
	for(int i=1;i<=9;i++){
		cin>>numnon0;
		if(numnon0>0&&flag==false){
			flag=true;
			cout<<i;
			for(int j=0;j<num0;j++)cout<<0;
			for(int j=1;j<numnon0;j++)cout<<i;
		}
		else for(int j=0;j<numnon0;j++)cout<<i;
	}
	return 0;
}
