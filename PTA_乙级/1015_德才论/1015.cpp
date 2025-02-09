#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string>

struct stu{
	double num;
	int de;
	int cai;
	int dengji;
};

bool cmp(stu *a,stu *b){
	if(a->dengji!=b->dengji)return a->dengji<b->dengji;
	else{
		if(a->de+a->cai!=b->de+b->cai)return a->de+a->cai>b->de+b->cai;
		else if(a->de!=b->de)return a->de>b->de;
		else return a->num<b->num;	
	}
}

using namespace std;
int main(){
	vector<stu*> v;
	int n,l,h,m=0;
	cin>>n>>l>>h;
	while(n--){
		stu *p=new stu();
		cin>>p->num>>p->de>>p->cai;
		if(p->de>=l&&p->cai>=l){
			m++;
			if(p->de>=h&&p->cai>=h)p->dengji=1;
			else if(p->de>=h)p->dengji=2;
			else if(p->de>=p->cai)p->dengji=3;
			else p->dengji=4;
			v.push_back(p);
		}
	}
	sort(v.begin(),v.end(),cmp);
	cout<<m;
	for(auto it=v.begin();it!=v.end();it++){
		cout<<endl<<fixed<<setprecision(0)<<(*it)->num<<' '<<(*it)->de<<' '<<(*it)->cai;
	}
	return 0;
} 
