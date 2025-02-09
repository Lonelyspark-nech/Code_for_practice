#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int a,b,d;
	cin>>a>>b>>d;
	vector<int>res;
	a=a+b;
	while(a>0){
		res.push_back(a%d);
		a=a/d;
	}
	reverse(res.begin(),res.end());
	if(res.size()==0)res.push_back(0);
	for(auto it=res.begin();it!=res.end();it++)cout<<*it; 
	cout<<endl;
    return 0;
}
