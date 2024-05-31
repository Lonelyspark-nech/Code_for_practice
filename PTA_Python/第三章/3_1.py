a=list(map(int,input().split()))
sum=0
for i in a:
    sum=sum+i
sum=sum/float(len(a))
for i in  a:
    if i>sum:
        print(i,end=' ')
