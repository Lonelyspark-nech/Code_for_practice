n=int(input())
res,a,b=0,2,1
for i in range(n):
    res+=a/b
    a,b=(a+b),a
print(f'{res:.2f}')
