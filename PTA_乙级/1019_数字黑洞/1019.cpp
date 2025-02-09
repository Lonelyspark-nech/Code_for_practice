#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	string in;
	int a,b,c;
	cin>>in;
	while(in.length()<4)in="0"+in;
	bool flag=true;
	for(auto it=in.begin();it!=in.end();it++){
		if(*it!=*in.begin()){
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<in<<" - "<<in<<" = 0000"; 
	}
	else{
		do{
			sort(in.begin(),in.end());
			b=stoi(in);
			reverse(in.begin(),in.end());
			while(in.length()<4)in.push_back('0');
			a=stoi(in);
			c=a-b;
			in=to_string(c);
			cout<<setw(4)<<setfill('0')<<a<<" - "<<setw(4)<<setfill('0')<<b<<" = "<<setw(4)<<setfill('0')<<c<<endl;
		}
		while(c!=6174);
	}
	return 0;
}
