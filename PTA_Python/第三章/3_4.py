ch=input()
s=input()
index=-1
for i in range(len(s)-1,-1,-1):
    if s[i]==ch:
        index=i
        break
if index>=0:
    print(f'index = {index}')
else:
    print("Not Found")

