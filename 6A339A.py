"""x = map(str, input().split("+"))
y = []
for i in x: # x = [ 1, 2, 3]
    y.append(int(i))
y.sort()
s = ""
for i in range(len(y)):
    if i == len(y)-1:
        s += ""+str(y[i])
    else:
        s += str(y[i])+"+"
print(s)


"+".join(sorted(input()[::2]))
 way way faster
 and only one line

"""
# 118A
s = input()
s = s.lower()
u = "."
for i in s:
    if i not in "AOYEUIaoyeui":
        u += i + "."
        
u = u[:-1]
print(u)

print( "." + ".".join( input().lower()[:-1] ) )