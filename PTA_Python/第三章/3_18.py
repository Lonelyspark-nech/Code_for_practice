x=input()
l=[]
for i in x:
    if i.isalpha() and i.upper() not in l and i.lower() not in l:
        l.append(i)
if len(l)>=10:
    for i in range(10):
        print(l[i],end="")
else: 
    print("not found")
