x=eval(input())
if x<0:
    print("Invalid Value!")
elif x<=50:
    res=0.53*x
    print(f'cost = {res:.2f}')
else:
    res=0.53*50+(0.53+0.05)*(x-50)
    print(f'cost = {res:.2f}')
