#include<iostream>
#include<vector>
using namespace std;

vector<int>mul(vector<int>&A,int B){
	int t=0;
	vector<int>C;
	for(int i=0;i<A.size();i++){
		t=A[i]*B+t;
		C.push_back(t%10);
		t/=10;
	}
	while(t>0){
		C.push_back(t%10);
		t/=10;
	}
	for(int i=C.size()-1;i>0;i--){
		if(C[i]==0)C.pop_back();
		else break;
	}
	return C;
}

int main(){
	string a;
	cin>>a;
	int B;
	cin>>B;
	
	vector<int>A;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	vector<int>C=mul(A,B);
	for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
	return 0;
}
