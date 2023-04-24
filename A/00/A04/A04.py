n = int(input())
num = []
for i in range(9, -1, -1):
    buff = n % 2
    num.append(buff)
    n  = n // 2

for i in range(9, -1, -1):
    print(num[i], end="")
print("")
