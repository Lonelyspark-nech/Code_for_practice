#include<iostream>
#include<stdio.h>
#include<string> 
#include<typeinfo>
#include<cstring>
#include<map>
using namespace std;
int main(){
	string s;
	string out;
	map<int,string> m={{1,"yi"},{2,"er"},{3,"san"},{4,"si"},{5,"wu"},{6,"liu"},{7,"qi"},{8,"ba"},{9,"jiu"},{0,"ling"}};
	cin>>s;
	int res=0;
	for(string::iterator it=s.begin();it!=s.end();it++){
	//	cout<<typeid(*it).name()<<endl;
		res+=*it-'0';
	}
	while(res!=0){
		int t=res%10;
		out.insert(0,m[t]);
		res/=10;
		if(res!=0)out.insert(0," ");
	}
	cout<<out;
	return 0;
} 
