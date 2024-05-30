import math
n=eval(input())
s=1
for i in range(2,n+1):
    s=s+pow(-1,i-1)*float(i)/float(2*i-1)
print(f'{s:.3f}')
    
