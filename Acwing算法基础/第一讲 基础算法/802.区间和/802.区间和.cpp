#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N=100000+100000*2+10;
typedef pair<int,int>PII;

vector<int> axis;
vector<PII>query;
vector<PII>num;
int prefix_sum[N],add_data[N];


int find(vector<int> &axis,int n){
	int l=0,r=axis.size()-1;
	while(l<r){
		int mid=(l+r)/2;
		if(axis[mid]<n)l=mid+1;
		else r=mid;
	}
	return r;
}


int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		int x,c;
		scanf("%d%d",&x,&c);
		axis.push_back(x);
		num.push_back(PII(x,c));
	}
	for(int i=0;i<m;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		axis.push_back(l);
		axis.push_back(r);
		query.push_back(PII(l,r));
	}
	
	
	sort(axis.begin(),axis.end());
	axis.erase(unique(axis.begin(),axis.end()),axis.end());
	
	for(int i=0;i<num.size();i++){
		int x=find(axis, num[i].first);
		add_data[x+1]+=num[i].second; 
	}
	
	for(int i=1;i<=axis.size();i++){
		prefix_sum[i]=prefix_sum[i-1]+add_data[i];
	}
	for(int i=0;i<query.size();i++){
		int l=find(axis,query[i].first),r=find(axis,query[i].second);
		int res= prefix_sum[r+1]-prefix_sum[l];
		printf("%d\n",res);
	}
	return 0;
}
