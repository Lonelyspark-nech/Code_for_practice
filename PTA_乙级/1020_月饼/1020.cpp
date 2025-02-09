#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct mooncake{
	double capacity;
	double price;
	double value;
};

bool cmp(mooncake &a,mooncake &b){
	return a.value>b.value;
}

int main(){
	int n,v;
	double res=0;
	cin>>n>>v;
	mooncake *p=new mooncake[n];
	for(int i=0;i<n;i++)cin>>p[i].capacity;
	for(int i=0;i<n;i++){
		cin>>p[i].price;
		p[i].value=p[i].price/p[i].capacity;
	}
	sort(p,p+n,cmp);
	/*
	for(int i=0;i<n;i++){
		cout<<p[i].capacity<<' '<<p[i].price<<' '<<p[i].value<<endl;
	}	
	*/
	for(int i=0;i<n;i++){
		if(v-p[i].capacity>=0){
			v=v-p[i].capacity;
			res+=p[i].price;
		}
		else{
			res+=p[i].value*v;
			break;
		}
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<res<<endl;
	return 0;
}
