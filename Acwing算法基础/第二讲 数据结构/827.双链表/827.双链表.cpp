#include<iostream>
using namespace std;
const int N=100010;

int e[N],l[N],r[N],idx;
int init(){
	l[0]=-1;
	l[1]=0;
	r[0]=1;
	r[1]=-1;
	idx=2;
}

int insert(int k,int x){//�ڵ�k����������������һ������ 
						//���У�k=0ʱ��ʾ��˵㣬k=1��ʾ�Ҷ˵㣬k=2�����ϱ�ʾ��k-1����������� 
	e[idx]=x;
	r[idx]=r[k];
	l[idx]=k;
	l[r[idx]]=idx;
	r[k]=idx;
	idx++; 
}
int del(int k){
	r[l[k]]=r[k];
	l[r[k]]=l[k];
}


int main(){
	init();
	int m,k,x;
	scanf("%d",&m);
	while(m--){
		char op1,op2;
		scanf("%*c%c",&op1);
		switch(op1){
			case 'L':
				scanf("%d",&x);
				insert(0,x);
				break;
			case 'R':
				scanf("%d",&x);
				insert(l[1],x);
				break;
			case 'D':
				scanf("%d",&k);
				del(k+1);
				break;
			case 'I':
				scanf("%c%d%d",&op2,&k,&x);
				switch(op2){
					case 'L':
						insert(l[k+1],x);
						break;
					case 'R':
						insert(k+1,x);
						break;
				}	 
				break;			
		}
					
	}
	for(int i=r[0];r[i]!=-1;i=r[i])printf("%d ",e[i]); 
} 
