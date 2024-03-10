#include<stdio.h>
int main(){
    int lower,upper;
    float i,res;
    scanf("%d%d",&lower,&upper);
    if(lower>upper||upper>100){
        printf("Invalid.");
    }
    else{
        printf("fahr celsius\n");
        for(i=lower;i<=upper;i+=2){
            res=5*(i-32)/9;
            if(i!=lower)printf("\n");
            printf("%.0f%6.1f",i,res);
        }
    }
    return 0;
}
