import math

m,n=map(int,input().split())
s=0
for i in range(m,n+1):
    s=s+pow(i,2)+1/float(i)
print(f'sum = {s:.6f}')
