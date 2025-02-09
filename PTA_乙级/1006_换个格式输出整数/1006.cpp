#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int main(){
	int i,n;
	cin>>n;
	string res;
	for(i=n%10;i>0;i--){
		res.insert(res.begin(),i+'0');
	}
	for(i=0,n=n/10;i<n%10;i++){
		res.insert(res.begin(),'S');
	}
	for(i=0,n=n/10;i<n%10;i++){
		res.insert(res.begin(),'B');
	}
	cout<<res<<endl;
	return 0;
}
