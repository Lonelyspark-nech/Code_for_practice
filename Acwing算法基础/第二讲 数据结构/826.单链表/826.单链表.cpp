#include<iostream>
using namespace std;
const int M=100010;
int idx, e[M],ne[M],head=-1;//e��ʾ����ֵ��ne��ʾ����nextָ�룬idx��ʾ��һ�����Բ������ݵ�λ�á�

void add_to_head(int x){
	e[idx]=x;
	ne[idx]=head;
	head=idx;
	idx++;
}
void del(int k){
	ne[k]=ne[ne[k]];
}
void add(int k,int x){
	e[idx]=x;
	ne[idx]=ne[k];
	ne[k]=idx;
	idx++;
}


int main(){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		char op;
		int x,k;
		getchar();
		scanf("%c",&op);
		if(op=='H'){
			scanf("%d",&x);
			add_to_head(x);
		}
		else if(op=='D'){
			scanf("%d",&k);
			if(k==0)head=ne[head];
			else del(k-1);
		}
		else if(op=='I'){
			scanf("%d%d",&k,&x);
			add(k-1,x);
		}		
	}
	for(int i=head;i!=-1;i=ne[i])printf("%d ",e[i]);
	return 0;
} 
