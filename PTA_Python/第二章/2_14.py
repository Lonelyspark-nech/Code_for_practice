a,b=map(int,input().split())
s=0
for i in range(a,b+1):
    s=s+i
    print(f'{i:5}',end='')
    if (i-a+1)%5==0 or i==b:
        print()
print(f'Sum = {s}')
