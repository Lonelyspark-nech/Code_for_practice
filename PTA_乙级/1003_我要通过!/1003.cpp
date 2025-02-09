#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c,p=-1,t=-1;
		bool flag=true;
		string in;
		cin>>in;
		for(string::iterator it=in.begin();it!=in.end();it++){
			if(*it=='P'&&p==-1)p=it-in.begin();
			else if(*it=='T'&&t==-1)t=it-in.begin();
			else if(*it!='A'){
				flag=false;
				break;
				}
		}
		if(flag==false)cout<<"NO"<<endl;
		else{
			a=p;
			b=t-p-1;
			c=in.length()-t-1;
			if((a==0&&b>=1&&c==0)||(a!=0&&b!=0&&c==a*b))cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
