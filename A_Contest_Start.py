k = int(input())
for t in range(k):
    n, x, t = map(int, input().split())
    if t*x>n:
        print(t//x * (n-t*x) + t//x * t*x - (t*x+1)*t*x//2)
    else:
        print(t//x * t*x - (t*x+1)*t*x//2)