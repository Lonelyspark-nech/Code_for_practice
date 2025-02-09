n=int(input())
res=""
maxlength=-1
for i in range(n):
    t=input()
    if len(t)>maxlength:
        maxlength=len(t)
        res=t
print(f"The longest is: {res}")
