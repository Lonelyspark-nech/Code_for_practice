#include<iostream>
using namespace std;

int prime[100005];
bool notprime[100005];
int k=0;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(!notprime[i]){
			prime[k++]=i;
		}
		for(int j=0;j<k;j++){
				if(i*prime[j]>n)break;
				notprime[i*prime[j]]=1;
				if(prime[j]%i==0)break;
		}
	}
	int res=0;
	for(int i=0;i<k-1;i++){
		if(prime[i+1]-prime[i]==2){
			res++;
		}
	}
	cout<<res;
	return 0;
} 
