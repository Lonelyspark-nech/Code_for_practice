#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>div(vector<int>&A,int B,int &t){
	vector<int>C;
	for(int i=A.size()-1;i>=0;i--){
		t=t*10+A[i];
		C.push_back(t/B);
		t%=B;
	}
	reverse(C.begin(),C.end());
	while(C.size()>1&&C.back()==0)C.pop_back();
	return C;
}

int main(){
	string a;
	cin>>a;
	int B,t=0;
	cin>>B;
	
	vector<int>A;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	vector<int>C=div(A,B,t);
	for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
	printf("\n%d",t);
	return 0;
}
