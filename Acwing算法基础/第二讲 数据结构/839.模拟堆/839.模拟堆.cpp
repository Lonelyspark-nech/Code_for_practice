#include<iostream>
#include<string.h>
using namespace std;

const int N=100010;

int h[N],ph[N],hp[N];//h�Ƕѱ���ph[i]��ָ��i����������ڶ��е�λ�ã�hp[k]�Ƕ��е�k�����ǵڼ�������ġ� 
int capacity=0,idx=0;

void heap_swap(int a,int b){//a��b������Ԫ���ڶ��е�λ�� 
	swap(ph[hp[a]],ph[hp[b]]);
	swap(hp[a],hp[b]);
	swap(h[a],h[b]); 
}

void down(int x){//�Զ����±�Ϊx��������down���� 
	int u=x; 
	if(2*x<=capacity&&h[2*x]<h[x])u=2*x;
	if(2*x+1<=capacity&&h[2*x+1]<h[u])u=2*x+1;
	if(u!=x){
		heap_swap(x,u);
		down(u);
	}
}
void up(int i){//�Զ����±�Ϊi��������up���� 
	if(i/2>0&&h[i/2]>h[i]){
		heap_swap(i/2,i);
		up(i/2);
	} 
}

void insert(int x){//�ڶ��в���һ��ֵΪx���� 
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
void delete_num(int k){//ɾ����k��������� 
	k=ph[k];
	heap_swap(k,capacity);
	capacity--;
	down(k);
	up(k);
}
void modify(int k,int x){//����k����������޸�Ϊx
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
		if(!strcmp(op,"I")){//����һ����x 
			scanf("%d",&x);
			insert(x);
		}
		else if(!strcmp(op,"PM")) printf("%d\n",h[1]);//������е���Сֵ
		else if(!strcmp(op,"DM")){		//ɾ�����е���Сֵ 
			delete_top();
		} 
		else if(!strcmp(op,"D")){		//ɾ����k��������� 
			scanf("%d",&k);
			delete_num(k);
		} 
		else if (!strcmp(op,"C")){		//�޸ĵ�k���������Ϊx 
			scanf("%d%d",&k,&x); 
			modify(k,x);
		}
	}
	return 0;
} 
