#include<iostream>
using namespace std;
const int N=100010;

int a[N],stk_op[N],stk_num[N],idx_op=0,idx_num=0;

void push(int a[],int x,int &idx){
	a[++idx]=x;
}
int pop(int a[],int &idx){
	int x=a[idx--];
	return x;
}
int query(int a[],int &idx){
	return a[idx];
}
bool empty(int &idx){
	if(idx>0)return false;
	else return true; 
}
void cal(){
	int num2=pop(stk_num,idx_num);
	int num1=pop(stk_num,idx_num);
	char op=pop(stk_op,idx_op);
	int res;
	switch(op){
		case '+':
			res=num1+num2;
			break;
		case '-':
			res=num1-num2;
			break;
		case '*':
			res=num1*num2;
			break;
		case '/':
			res=num1/num2;
			break;
	}
	push(stk_num,res,idx_num);
}


int main(){
	int temp=0;
	bool num_reading=false; 
	char ch,last_op;
	while((ch=getchar())!='\n'){
		if(ch<='9'&&ch>='0'){
			num_reading=true; 
			temp=temp*10+ch-'0';
		}
		else{
			if(num_reading){
				num_reading=false;
				push(stk_num,temp,idx_num);
				temp=0;
			}
			last_op=query(stk_op,idx_op);
			while(!(ch=='('||last_op=='\0'||((ch=='*'||ch=='/')&&(last_op=='+'||last_op=='-'))||last_op=='(')){
				cal();
				last_op=query(stk_op,idx_op);
			}
			
			if(ch!=')')push(stk_op,ch,idx_op);
			
			last_op=query(stk_op,idx_op);
			if(ch==')'&&last_op=='('){
				pop(stk_op,idx_op);
			}
		}
	}
	if(num_reading){
		num_reading=false;
		push(stk_num,temp,idx_num);
		temp=0;
	}
	while(!empty(idx_op)){	
		if(query(stk_op,idx_op)=='(')pop(stk_op,idx_op);
		else cal();
	}
	int res=pop(stk_num,idx_num);
	printf("%d",res);
	return 0;
} 
