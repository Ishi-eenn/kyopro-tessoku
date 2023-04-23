# 入力
n, x = map(int, input().split())
A = list(map(int, input().split()))

# 配列の先頭から一つずつ確認する
for i in range(n):
    if(x == A[i]):
        # 一致した時、yesと表示しプログラムを終了する
        print("Yes")
        exit()

# 先頭から確認し、一致していないためNoを返す
print("No")

# 多分理論値
# n,x,*a=open(0).read().split()
# print('NYoe s'[x in a::2])
