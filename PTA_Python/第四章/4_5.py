n=int(input())
sum=1
x=1
for i in range(1,n+1):
    x=x*i
    sum=sum+1/x
print(f"{sum:.8f}")
