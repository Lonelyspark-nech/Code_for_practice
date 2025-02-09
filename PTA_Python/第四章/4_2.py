from math import *
m,n=map(int,input().split())
sum=0
num=0
for i in range(m,n+1):
    if i==1:
        continue
    flag=True
    for j in range(2,ceil(sqrt(i))+1):
        if i==2:
            break
        if i%j==0:
            flag=False
            break
    if flag:
        sum+=i
        num+=1
print(num,sum)
