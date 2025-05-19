def solve():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    for a in arr:
        if(a==k):
            print("YES")
            return
    print("NO")
n = int(input())
while n:
    solve()
    n-=1