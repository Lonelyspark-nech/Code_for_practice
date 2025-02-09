#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string a;
	int B=0,t=0;
	cin>>a>>B;
	vector<int>A,C;
	for(int i=a.length()-1;i>=0;i--)A.push_back(a[i]-'0');
	for(int i=A.size()-1;i>=0;i--){
		t=t*10+A[i];
		int res=t/B;
		C.push_back(res);
		t=t-t/B*B;
	}
	reverse(C.begin(),C.end());
	while(C.size()>1&&(C.back()==0))C.pop_back(); 
	for(int i=C.size()-1;i>=0;i--)cout<<C[i];
	cout<<' '<<t;
	return 0;
} 
