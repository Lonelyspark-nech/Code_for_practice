#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int seconds= ((double)(b-a)/100.0+0.5)/1;
	int hours=seconds/3600;
	int minutes=seconds%3600/60;
	seconds=seconds%60;
	cout<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)<<setfill('0')<<minutes<<":"<<setw(2)<<setfill('0')<<seconds;
}
