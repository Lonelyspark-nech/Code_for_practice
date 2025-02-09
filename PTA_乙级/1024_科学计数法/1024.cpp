#include<iostream>
#include<string>
using namespace std;
int main(){
	string in,out;
	cin>>in;
	if(in[0]=='-')cout<<in[0];
	in.erase(in.begin(),in.begin()+1);
	int p=in.find('E');
	bool sign_of_index=in[p+1]=='+';
	string t=in.substr(p+2);
	int index=stoi(t);
	in.erase(in.begin()+p,in.end());

	if(sign_of_index){
		int t=in.length()-2;
		in.erase(in.begin()+1,in.begin()+2);
		if(t<=index){
			string s(index-t,'0');
			out=in+s;
		}
		else out=in.substr(0,index+1)+"."+in.substr(index+1);

	}
	else {
		if(index==0)out=in;
		else{
			in.erase(in.begin()+1,in.begin()+2);
			string s(index-1,'0');
			out="0."+s+in;
		}
	}
	cout<<out;
	return 0;
}
