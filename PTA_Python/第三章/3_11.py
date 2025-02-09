s=input()
l=list(s.split(' '))

l.sort()
print("After sorted:")
for i in range(len(l)):
    print(l[i])
