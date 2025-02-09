a=input()
b=""
for i in range(len(a)):
    if a[i].isdigit():
        b+=a[i]
print(int(b))
