n=int(input())
Fibonacci=[]
if n<1:
    print("Invalid.")
elif n==1:
    Fibonacci=[1]
elif n==2:
    fibonacci=[1,1]
else:
    fibonacci=[1,1]
    for i in range(2,n):
        fibonacci.append(fibonacci[i-1]+fibonacci[i-2])
    count=0
    for i in fibonacci:
        if count==5:
            count=0
            print("")
        print(f"{i:11d}",end="")
        count+=1
    print("")
