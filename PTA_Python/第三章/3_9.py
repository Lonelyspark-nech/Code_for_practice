dic={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','-'}

x=input()
y=""
x=x.lower()
for i in x:
    if i in dic:
        y=y+i
x=y[0]

for i in y[1:]:
    if i is not '-':
        x=x+i

if len(x)==1 and x[0]=='-':
    res=0
    
else:
    res=int (x,16)
print(res)



'''
s = input()
re = '1234567890abcdefABCDEF'

list = ""
for i in s:
    if i in re:
        list =list + i

if list == '':
    print('0')
elif s.find('-')< s.find(list[0]):
    print(-int(list,16))
else:
    print(int(list,16))'''
