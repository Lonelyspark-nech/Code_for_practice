#include<iostream>
using namespace std;
int main(){
	int n=0,res=0;
	scanf("%d",&n);
	while(n>1){
		if(n%2==0)n=n/2;
		else n=(3*n+1)/2;
		res++;
	}
	printf("%d",res);
	return 0;
} 
