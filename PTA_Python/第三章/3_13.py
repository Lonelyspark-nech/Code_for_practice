s=input()
res=""
for i in range(len(s)):
    if s[i]>='A' and s[i]<='Z':
        res+=chr(ord('A')+ord('Z')-ord(s[i]))
    else:
        res+=s[i]
print(res)
