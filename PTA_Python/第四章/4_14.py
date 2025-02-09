import sys

letter,blank,digit,other=0,0,0,0

for i in range(10):
    c=sys.stdin.read(1)
    if c.isalpha():
        letter+=1
    elif c.isdigit():
        digit+=1
    elif c.isspace():
        blank+=1
    else:
        other+=1

print(f'letter = {letter}, blank = {blank}, digit = {digit}, other = {other}')
