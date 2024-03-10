#include<stdio.h>
int main(){
    int h=100;
    float res;
	res=0.5*10*3*3;
    if(res>h)res=h;
    printf("height = %.2f",res);
    return 0;
}
