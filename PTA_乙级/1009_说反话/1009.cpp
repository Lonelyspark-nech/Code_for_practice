#include<iostream>
#include<string>
#include<deque>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	string in,t;
	vector<string> v;
	getline(cin,in);
	stringstream ss(in);
	while(ss>>t){
		v.push_back(t);
	}
	bool flag=true;
	for(auto it=v.rbegin();it!=v.rend();it++){
		if(flag)flag=false;
		else cout<<' ';
		cout<<*it;
	}
}
