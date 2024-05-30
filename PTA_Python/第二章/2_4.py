a,n=map(int,input().split())
s,t=0,0
for i in range(n):
    t=10*t+a
    s=s+t
print(f's = {s:d}')
