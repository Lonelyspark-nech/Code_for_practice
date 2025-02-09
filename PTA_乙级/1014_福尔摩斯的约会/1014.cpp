#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;

vector<string> v={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
	string a,b,c,d;
	int res1=-1,res2=-1,res3=-1;
	cin>>a>>b>>c>>d;
	for(int i=0;i<a.length();i++){
		if(a[i]==b[i]&&a[i]<='G'&&a[i]>='A'&&res1==-1){
			res1=a[i]-'A'+1;
		}
		else if(a[i]==b[i]&&res1!=-1&&((a[i]<='9'&&a[i]>='0')||(a[i]<='N'&&a[i]>='A'))&&res2==-1){
			if(a[i]<='9'&&a[i]>='0')res2=a[i]-'0';
			else if(a[i]<='N'&&a[i]>='A')res2=a[i]-'A'+10;
		}
		if(res1!=-1&&res2!=-1)break;
	}
	for(int i=0;i<c.length();i++){
		if(c[i]==d[i]&&isalpha(c[i])&&res3==-1){
			res3=i;
			break;
		}
	}
	cout<<v[res1-1]<<' '<<setfill('0')<<setw(2)<<res2<<':'<<setw(2)<<res3;
    return 0;
}
