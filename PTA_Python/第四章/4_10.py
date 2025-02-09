m,n=map(int,input().split())
a,b=max(m,n),min(m,n)
while a%b!=0:
    a,b=b,a%b
print(b,int(m*n/b))
