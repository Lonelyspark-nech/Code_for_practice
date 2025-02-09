#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstring>
using namespace std;

int con[100010];
int nextadd[100010];
int temp[100010];
int main(){
	memset(con,-1,sizeof(con));
	memset(nextadd,-1,sizeof(nextadd));
	memset(temp,-1,sizeof(temp));
	
	int first,last,n,k;
	cin>>first>>n>>k;
	for(int i=0;i<n;i++){
		int add;
		cin>>add;
		cin>>con[add]>>nextadd[add];
	}
	bool flag=false;
	int i=0,l=0,add=first;
	
	int t=1;
	while(nextadd[add]!=-1){
		t++; 
		add=nextadd[add]; 
	}
	n=t;
	add=first;
	
	while(true){
		for(i=0;i<k&&i+l<n;i++){
			temp[i]=add;
			add=nextadd[temp[i]];
		}
		l+=k;
		if(i==k){
			for(int j=0;j<k/2;j++){
				int t=temp[j];
				temp[j]=temp[k-j-1];
				temp[k-j-1]=t;
			}
			temp[k]=nextadd[temp[0]];
			add=temp[k];
			for(int j=0;j<k;j++){
				nextadd[temp[j]]=temp[j+1];
			}
			if(flag==false){
				flag=true;
				first=temp[0];
			}
			else nextadd[last]=temp[0];	
			
			last=temp[k-1];	
		}
		else break;
	}
	add=first;
	for(int i=0;i<n;i++){
		if(i!=n-1)cout<<setw(5)<<setfill('0')<<add<<' '<<con[add]<<' '<<setw(5)<<setfill('0')<<nextadd[add]<<endl;
		else cout<<setw(5)<<setfill('0')<<add<<' '<<con[add]<<' '<<nextadd[add]<<endl;
		add=nextadd[add];
	}
	
	return 0;
}
