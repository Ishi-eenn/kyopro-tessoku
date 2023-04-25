n = input()
sum = 0

for i in range(len(n)):
    pow = 2 ** (len(n) - i - 1)
    sum += (int(n[i])) * pow

print(sum)
