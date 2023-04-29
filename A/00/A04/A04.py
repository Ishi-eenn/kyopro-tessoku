n = int(input())
num = [] #空の配列を用意
for i in range(9, -1, -1):
    buff = n % 2
    num.append(buff) #後ろに追加する。
    n  = n // 2

for i in range(9, -1, -1):
    print(num[i], end="") #改行を消す。
print("")
