s=input()
a,b=input().split(' ')
for i in range(len(s)-1,-1,-1):
    if s[i]==a or s[i]==b:
        print(f'{i} {s[i]}')
