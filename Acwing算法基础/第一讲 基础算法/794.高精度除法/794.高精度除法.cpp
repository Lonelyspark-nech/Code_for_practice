#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>div(vector<int>&A,int B,int &t){
	vector<int>C;
	for(int i=A.size()-1;i>=0;i--){		//再倒序遍历：从高位开始列竖式 
		t=t*10+A[i];
		C.push_back(t/B);				
		t%=B;
	}
	reverse(C.begin(),C.end());			//再次反转 
	while(C.size()>1&&C.back()==0)C.pop_back();		//去除前导零 
	return C;
}

int main(){
	string a;
	cin>>a;
	int B,t=0;
	cin>>B;
	
	vector<int>A;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');	//倒序插入 
	vector<int>C=div(A,B,t);
	for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);		//去除前导零后，结果倒序输出 
	printf("\n%d",t);	
	return 0;
}
