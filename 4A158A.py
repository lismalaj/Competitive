x, y = map(int, input().split(" "))#x = int(input())
#y = int(input())
counter = 0
ara = []
while x:
    ara.append(int(input()))
    x-=1
for i in ara:
    if(i >= ara[y-1] and i> 0): counter +=1
print(counter)
""" CORRECT SOlUTION 
participents_count, position = map(int, input().split(' '))
scores = list(map(int, input().split(' ')))

total_advanced = 0
for point in scores:
    if point >= scores[position-1] and point != 0:
        total_advanced += 1
"""