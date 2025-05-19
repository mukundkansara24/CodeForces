def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    sum = 0
    for a in arr:
        sum+=a
    print(sum*(-1))
n = int(input())
while n:
    solve()
    n-=1