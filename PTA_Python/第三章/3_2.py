weight=[7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2]
dic={'1':0,'0':1,'X':2,'9':3,'8':4,'7':5,'6':6,'5':7,'4':8,'3':9,'2':10}
wrongflag=0
continueflag=0
n=eval(input())
for i in range(n):
    s=input()
    sum=0
    for j in range(len(s)-1):
        if s[j].isdigit():
            sum=sum+int(s[j])*weight[j]
        else:
            wrongflag=1
            print(s)
            continueflag=1
            break
    if continueflag==1:
        continueflag=0
        continue
    z=sum%11
    if not ((s[17].isdigit() or s[17]=='X')and dic[s[17]]==z):
        wrongflag=1
        print(s)
if wrongflag==0:
    print("All passed")
