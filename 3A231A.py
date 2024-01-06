n = int(input())
oneCounter = 0
yes = 0
for i in range(n):
    a,b,c = map(int, input().split())
    if(a): oneCounter +=1
    if(b): oneCounter +=1
    if(c): oneCounter +=1
    if(oneCounter >= 2): yes += 1
    oneCounter = 0
print(yes)
