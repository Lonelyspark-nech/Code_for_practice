print("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit")
dic={1:3.00,2:2.50,3:4.10,4:10.20}
l=list(map(int,input().split()))
count=5
for i in l:
    if i==0:
        exit(0)
    else:
        print(f"price = {dic.get(i,0):.2f}")
    count-=1
    if count==0:
        exit(0)
