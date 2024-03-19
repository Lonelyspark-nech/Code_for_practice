#include<iostream>
#include<string.h>
using namespace std;

const int N=100010;

int h[N],ph[N],hp[N];//h是堆本身，ph[i]是指第i个插入的数在堆中的位置，hp[k]是堆中第k个数是第几个插入的。 
int capacity=0,idx=0;

void heap_swap(int a,int b){//a和b是两个元素在堆中的位置 
	swap(ph[hp[a]],ph[hp[b]]);
	swap(hp[a],hp[b]);
	swap(h[a],h[b]); 
}

void down(int x){//对堆中下标为x的数进行down操作 
	int u=x; 
	if(2*x<=capacity&&h[2*x]<h[x])u=2*x;
	if(2*x+1<=capacity&&h[2*x+1]<h[u])u=2*x+1;
	if(u!=x){
		heap_swap(x,u);
		down(u);
	}
}
void up(int i){//对堆中下标为i的数进行up操作 
	if(i/2>0&&h[i/2]>h[i]){
		heap_swap(i/2,i);
		up(i/2);
	} 
}

void insert(int x){//在堆中插入一个值为x的数 
	h[++capacity]=x;
	hp[capacity]=++idx;
	ph[hp[capacity]]=capacity;
	up(capacity); 
}
void delete_top(){
	heap_swap(1,capacity);
	capacity--;
	down(1);
}
void delete_num(int k){//删除第k个插入的数 
	k=ph[k];
	heap_swap(k,capacity);
	capacity--;
	down(k);
	up(k);
}
void modify(int k,int x){//将第k个插入的数修改为x
	k=ph[k];
	h[k]=x;
	down(k);
	up(k);
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char op[5];
		int x,k;
		scanf("%s",op);
		if(!strcmp(op,"I")){//插入一个数x 
			scanf("%d",&x);
			insert(x);
		}
		else if(!strcmp(op,"PM")) printf("%d\n",h[1]);//输出堆中的最小值
		else if(!strcmp(op,"DM")){		//删除堆中的最小值 
			delete_top();
		} 
		else if(!strcmp(op,"D")){		//删除第k个插入的数 
			scanf("%d",&k);
			delete_num(k);
		} 
		else if (!strcmp(op,"C")){		//修改第k个插入的数为x 
			scanf("%d%d",&k,&x); 
			modify(k,x);
		}
	}
	return 0;
} 
