#include<iostream>
#include<vector>

using namespace std;

bool cmp(vector<int>&A,vector<int>&B){//A<Bʱ����False�����򷵻�True 
	if(A.size()!=B.size())return A.size()>=B.size();
	else{
		for(int i=A.size()-1;i>=0;i--){
			if(A[i]!=B[i])return A[i]>B[i];
		}
	}
	return true;
}
vector<int>sub(vector<int>&A,vector<int>&B){//��Ҫ��֤A>=B 
	vector<int>C;
	int t=0;								//����н�λ����t=1,������t=0
	for(int i=0;i<A.size();i++){
		t=A[i]-t;
		if(i<B.size())t=t-B[i];
		C.push_back((t+10)%10);
		t=t>=0?0:1;
	}
	
	
	for(int i=C.size()-1;i>0;i--){
		if(C[i]!=0)break;
		else C.pop_back(); 
	}
	
	return C;
}

int main(){
	string a,b;
	cin>>a>>b;
	vector<int>A,B;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
	vector<int>C;
	if(!cmp(A,B)){
		printf("-");	
		C=sub(B,A);
	}
	else C=sub(A,B);
	for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
	return 0;
}
