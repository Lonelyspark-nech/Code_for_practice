n=int(input())
average,count=0,0
if n>0:
    l=list(map(int,input().split()))
    for i in l:
        average+=i
        if i>=60:
            count+=1
    average=average/n
print(f"average = {average:.1f}")
print(f"count = {count:d}")
