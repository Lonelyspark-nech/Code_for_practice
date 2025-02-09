x=input()
res=""
for i in x:
    if i>='A' and i<='Z':
        res+=chr(ord('a')-ord('A')+ord(i))
    elif i>='a' and i<='z':
        res+=chr(ord('A')-ord('a')+ord(i))
    else:
        res+=i
res=res[:-1]
print(res)
