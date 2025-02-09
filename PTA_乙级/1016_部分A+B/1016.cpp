#include<iostream>
#include<algorithm>
using namespace std;

int func(int num,int d){
	int res=0;
	while(num--){
		res*=10;
		res+=d;
	}
	return res;
}

int main(){
	string a,b;
	int numa=0,numb=0;
	char da,db;
	cin>>a>>da>>b>>db;
	/*
	for(int i=0;i<a.length();i++){
		if(a[i]-'0'==da)numa++;
	}
	for(int i=0;i<b.length();i++){
		if(b[i]-'0'==db)numb++;
	}	
	*/
	numa=count(a.begin(),a.end(),da);
	numb=count(b.begin(),b.end(),db);
	cout<<func(numa,da-'0')+func(numb,db-'0')<<endl;
	return 0;
} 
