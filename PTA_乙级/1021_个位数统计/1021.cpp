#include<string>
#include<iostream>
using namespace std;
int num[12];
int main(){
	string in;
	cin>>in;
	for(auto it=in.begin();it!=in.end();it++)num[*it-'0']++;
	for(int i=0;i<10;i++){
		if(num[i]>0)cout<<i<<":"<<num[i]<<endl;
	}
	return 0;
}
