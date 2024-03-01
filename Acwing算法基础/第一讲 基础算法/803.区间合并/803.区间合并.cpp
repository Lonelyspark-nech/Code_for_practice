#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef pair<int,int>PII;
const int N=100010;
vector<PII> a;

vector<PII>merge(vector<PII>&a){
	sort(a.begin(),a.end());
	vector<PII>b;
	int l=-2e9,r=-2e9;
	for(PII item:a){
		if(l==-2e9){
			l=item.first;
			r=item.second;
		}
		else if(item.first>r){
			b.push_back(PII(l,r));
			l=item.first;
			r=item.second;
		}
		else{
			r=max(r,item.second);
		}
	}
	if(l!=-2e9)b.push_back(PII(l,r));
	return b;
}

int main(){
	int n,l,r;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&l,&r);
		a.push_back(PII(l,r)); 
	}
	a=merge(a);
	printf("%d",a.size());
	return 0;
} 
