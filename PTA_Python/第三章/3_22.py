x=input()
l=[]
for i in x:
    if i.isupper()and i not in l:
        l.append(i)
if len(l)<=0:
    print("Not Found")
else:
    print("".join(l))
    
