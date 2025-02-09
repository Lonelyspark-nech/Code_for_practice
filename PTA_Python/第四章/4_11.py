from math import *

def isprime(x):
    if x==2 or x==3:
        return True
    elif (x%6!=1 and x%6!=5) or x==1:
        return False
    else:
        for i in range(5,ceil(sqrt(x))+1,6):
            if x%i==0 or x%(i+2)==0:
                return False
    return True


n=int(input())
for i in range(n):
    x=int(input())
    if isprime(x):
        print("Yes")
    else:
        print("No")
