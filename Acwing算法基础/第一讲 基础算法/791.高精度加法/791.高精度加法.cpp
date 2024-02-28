#include<iostream>
#include<vector>
using namespace std;

vector<int> add(vector<int>&A,vector<int>&B){
	vector<int>C;
	int i,t=0;
	for(i=0;i<A.size()||i<B.size();i++){
		if(i<A.size())t+=A[i];
		if(i<B.size())t+=B[i];
		C.push_back(t%10);
		t=t/10;
	}
	if(t>0)C.push_back(t);
	
	return C;
}

int main(){
	string a,b;
	cin>>a>>b;
	vector<int> A,B;
	int i;
	for(i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	for(i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
	vector<int>C=add(A,B);
	for(i=C.size()-1;i>=0;i--)printf("%d",C[i]);
	return 0;
}
