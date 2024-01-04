n = int(input()) # User input
for i in range(n):
    x = input()
    if(len(x) >10):
        print(f"{x[0]}{len(x)-2}{x[-1]}")
    else:
        print(x)