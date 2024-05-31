import math

x,y=map(int,input().split(','))
x=str(x)
l=len(x)
s=0
for i in range(len(x)):
    s=s+int(x[i])*pow(y,l-1-i)
print(s)
