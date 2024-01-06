p =  []
for i in range(int(input())):
    s = input().split()
    # print("sdfsd: ", s) creates a  list [] with string variables
    count = 0
    if( s.count('1') >=2):
        count +=1
        p.append(count)
print(sum(p))