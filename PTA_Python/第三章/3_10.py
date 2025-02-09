dic="AEIOU"

s=input()
res=0
for i in s:
    if i<='Z' and i>='A' and i not in dic:
        res=res+1

print(res)
