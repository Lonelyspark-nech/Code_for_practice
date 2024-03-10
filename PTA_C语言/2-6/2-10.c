#include<stdio.h>
int main(){
    float x,res;
    scanf("%f",&x);
    if(x!=0)res=1/x;
    else res=0.0;
    printf("f(%.1f) = %.1f",x,res);
    return 0;
}
