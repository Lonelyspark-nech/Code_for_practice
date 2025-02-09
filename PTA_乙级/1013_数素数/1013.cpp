#include<iostream>
using namespace std;

int prime[110000];
bool notprime[110000];
int k=0;

void eulerseive(int n){
	for(int i=2;i<n;i++){
		if(!notprime[i])prime[k++]=i;
		for(int j=0;j<k;j++){
			if(i*prime[j]>n)break;
			notprime[i*prime[j]]=1;
			if(prime[j]%i==0)break;
		}
	}
} 

int main(){
	int m,n;
	cin>>m>>n;
	eulerseive(105000);
	int num=0;
	for(int i=m-1;i<n;i++){
		if(num==10){
			num=0;
			cout<<endl;
		}
		if(num!=0)cout<<' ';
		cout<<prime[i];
		num++;
	}
	return 0;
}
