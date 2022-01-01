a = "abcdefghijklmnopqrstuvwxyz"
n, q = map(int, input().split())
s = input()

sum = 0
sums = []
for i in range(n):
    sum += a.index(s[i])+1
    sums.append(sum)

for t in range(q):
    l, f = map(int, input().split())
    if l > 1:
        print(sums[f-1]-sums[l-2])
    else:
        print(sums[f-1])