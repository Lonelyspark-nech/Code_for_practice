#include<iostream>
using namespace std;

const double N=1e-8;
double binary_search_float(double n,double l,double r){
	if((r-l)<N)return l;
	double mid=(l+r)/2;
	if(mid*mid*mid<n)binary_search_float(n,mid,r);
	else binary_search_float(n,l,mid);
}

int main(){
	double n,m;
	scanf("%lf",&n);
	if(n>=0)m=binary_search_float(n,0,n>1?n:1);
	else m=binary_search_float(n,n<-1?n:-1,0);
	printf("%lf",m);
	return 0;
} 
