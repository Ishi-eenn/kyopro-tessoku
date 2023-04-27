n, q = map(int, input().split())
a = list(map(int, input().split()))
l = [ None ] * q
r = [ None ] * q
for j in range(q):
	l[j], r[j] = map(int, input().split())

sum = [ None ] * (n + 1)
sum[0] = 0
for i in range(n):
	sum[i + 1] = sum[i] + a[i]

for j in range(q):
	print(sum[r[j]] - sum[l[j] - 1])
