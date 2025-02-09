a=list(map(int,input().split()))
b=a[1:]
max=0
ch=""
for i in range(len(b)):
    if max<b.count(b[i]):
        max=b.count(b[i])
        ch=b[i]
print(f'{ch} {max}')
