import math

a,b,c=map(int,input().split())
if a+b<=c or b+c<=a or c+a<=b:
    print("These sides do not correspond to a valid triangle")
else:
    s=(a+b+c)/float(2)
    area=math.sqrt(s*(s-a)*(s-b)*(s-c))
    perimeter=a+b+c
    print(f'area = {area:.2f}; perimeter = {perimeter:.2f}')
