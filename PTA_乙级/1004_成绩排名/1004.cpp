#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int N;
int maxg=-1,ming=101,tempg;


int main(){
	scanf("%d",&N);
	string maxnum,minnum,maxname,minname,tempnum,tempname;
	while(N--){
			cin>>tempname>>tempnum>>tempg;{
				if(maxg==-1&&ming==101){
					maxg=tempg,maxname=tempname,maxnum=tempnum;
					ming=tempg,minname=tempname,minnum=tempnum;
				}
			 	if(tempg<ming){
			 		ming=tempg,minname=tempname,minnum=tempnum;
				 }
				 else if(tempg>maxg){
				 	maxg=tempg,maxname=tempname,maxnum=tempnum;
				 }
			 }
	}
	cout<<maxname<<' '<<maxnum<<endl;
	cout<<minname<<' '<<minnum<<endl;
	return 0;
}
