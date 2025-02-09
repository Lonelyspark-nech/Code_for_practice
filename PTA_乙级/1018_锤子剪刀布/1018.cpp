#include<iostream>
using namespace std;

char c[3]={'B','C','J'};
int main(){
	int n;
	cin>>n;
	int**t=new int*[4]();
	for(int i=0;i<4;i++){
		t[i]=new int[3]();
	}
	while(n--){
		char a,b;
		cin>>a>>b;
		if(a==b){
			t[0][1]++;
			t[1][1]++;
		}
		else if((a=='B'&&b=='C')||(a=='C'&&b=='J')||(a=='J'&&b=='B')){
			t[0][0]++;
			t[1][2]++;
			for(int i=0;i<3;i++)if(c[i]==a){
				t[2][i]++;
				break;
			}
		}
		else if((b=='B'&&a=='C')||(b=='C'&&a=='J')||(b=='J'&&a=='B')){
			t[0][2]++;
			t[1][0]++;
			for(int i=0;i<3;i++)if(c[i]==b){
				t[3][i]++;
				break;
			}
		}
	}
	cout<<t[0][0]<<' '<<t[0][1]<<' '<<t[0][2]<<endl<<t[1][0]<<' '<<t[1][1]<<' '<<t[1][2]<<endl;
	int r=0;
	for(int i=0;i<3;i++)if(t[2][i]>t[2][r])r=i;
	cout<<c[r]<<' ';
	r=0;
	for(int i=0;i<3;i++)if(t[3][i]>t[3][r])r=i;
	cout<<c[r]<<endl;
	return 0;
}
