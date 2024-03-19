#include<iostream>
#include<bitset>
#include<math.h>
#include<typeinfo>
using namespace std;
const int N=3100010;

long long int son[N][2],cnt[N],idx=0,maxsum=-1;

long long int pruning[]={1,3,7,15,31,63,127,255,511,1023,
				2047,4095,8191,16383,32767,65535,131071,262143,524287,1048575,
				2097151,4194303,8388607,16777215,33554431,67108863,134217727,268435455,536870911,1073741823,2147483647};

void insert(long long int x){
	int p=0;
	for(int i=30;i>=0;i--){
		int s=x>>i&1; 
		if(!son[p][s]){
			son[p][s]=++idx;
		} 
		p=son[p][s];
	}
	cnt[idx]++;
}

int query(int a,int b,int i,int sum){
	int tempsum;
	if(i<0){
		if(maxsum<sum){
			maxsum=sum;
		}
		return sum;
	}
	else if((sum<<(i+1))+pruning[i+1]<maxsum)return 0;
	else if(i<30)sum=sum*2;
	if((son[a][0]&&son[b][1])||(son[a][1]&&son[b][0])){
		sum=sum+1;
		if(son[a][0]&&son[b][1])tempsum=query(son[a][0],son[b][1],i-1,sum);
		if(son[a][1]&&son[b][0]&&a!=b)tempsum=query(son[a][1],son[b][0],i-1,sum);
	}
	else{
		if(son[a][0]&&son[b][0])tempsum=query(son[a][0],son[b][0],i-1,sum);
		else if(son[a][1]&&son[b][1])tempsum=query(son[a][1],son[b][1],i-1,sum);	
	}
	return tempsum;
}


int main(){	
	int n;	
	scanf("%d",&n);
	while(n--){
		long long int a;
		scanf("%lld",&a);
		insert(a);
	}
	query(0,0,30,0);
	printf("%lld",maxsum);
	return 0;
}
