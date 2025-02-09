#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a1=0,a2=0,a3=0,a4=0,a5=0,n=0,flag=1;
	int num1=0,num2=0,num3=0,num4=0,num5=0;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		switch(t%5){
			case(0):{
				if(t%2==0){
					a1+=t;
					num1++;
				}
				break;
			}
			case(1):{
				num2++;
				a2+=flag*t;
				flag=0-flag; 
				break;
			}
			case(2):{
				num3++;
				a3++;
				break;
			}
			case(3):{
				num4++;
				a4+=t; 
				break;
			}
			case(4):{
				num5++;
				if(a5<t)a5=t;
				break;
			}
		}
	}
	if(num1==0)cout<<"N ";
	else cout<<a1<<' ';
	if(num2==0)cout<<"N ";
	else cout<<a2<<' ';
	if(num3==0)cout<<"N ";
	else cout<<a3<<' ';
	if(num4==0)cout<<"N ";
	else{
		double res4=(float)a4/(float)num4;
		cout<<setiosflags(ios::fixed)<<setprecision(1)<<res4<<' ';
	}
	if(num5==0)cout<<"N";
	else cout<<a5;
} 
