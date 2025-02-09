m,n=map(int,input().split())
isprime=[1]*(n+1)
prime=[]
sum=0
num=0
for i in range(2,n+1):
    if isprime[i]:
        prime.append(i)
        if i>=m:
            sum+=i
            num+=1
    for j in prime:
        if i*j<=n:
            isprime[i*j]=0
        if i%j==0:
            break
print(num,sum)
