from math import *

def primejudge(n):
    if n==2 or n==3:
        return True
    elif n==1 or (n%6!=1 and n%6!=5):
        return False
    else:
        for i in range(5,ceil(sqrt(n))+1,6):
            if n%i==0 or n%(i+2)==0:
                return False
    return True

n=int(input())
for i in range(2,n+1):
    if primejudge(i) and primejudge(n-i):
        print(f"{n} = {i} + {n-i}")
        break
