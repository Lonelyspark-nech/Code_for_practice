n=eval(input())
l=list(map(int,input().split()))
index=0
ch=-1e5
for i in range(n):
    if l[i]>ch:
        index=i
        ch=l[i]
print(f'{ch} {index}')
