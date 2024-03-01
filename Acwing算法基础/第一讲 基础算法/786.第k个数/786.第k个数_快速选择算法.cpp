#include<iostream>
using namespace std;
const int N=100010;
int a[N];
int quick_check(int a[],int l,int r,int k){
    if(l>=r)return a[r];
    int i=l-1,j=r+1,mid=a[(l+r)/2];
    while(i<j){
        while(a[++i]<mid);
        while(a[--j]>mid);
        if(i<j)swap(a[i],a[j]);
    }
    if(j-l+1>=k)quick_check(a,l,j,k);
    else quick_check(a,j+1,r,k-(j-l+1));
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int res=quick_check(a,0,n-1,k);
    printf("%d",res);
    return 0;
}
