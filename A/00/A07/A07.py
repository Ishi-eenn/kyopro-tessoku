d = int(input())
n = int(input())
l = [None] * n
r = [None] * n

for i in range(n):
	l[i], r[i] = map(int, input().split())

data = [0] * (d + 2)
for i in range(n):
	data[l[i]] += 1
	data[r[i] + 1] -= 1

ans = [None] * (d + 2)
ans[0] = 0
for i in range(1, d + 1):
	ans[i] = ans[i - 1] + data[i]

for i in range(1, d + 1):
	print(ans[i])
