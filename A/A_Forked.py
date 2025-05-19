dx = [-1, 1, -1, 1]
dy = [-1, -1, 1, 1]
def solve():
    a, b = map(int, input().split())
    king = list(map(int, input().split()))
    queen = list(map(int, input().split()))
    kings_position = set()
    queens_position = set()
    for i in range(0, 4):
        kings_position.add((king[0] + dx[i]*a, king[1] + dy[i]*b))
        kings_position.add((king[0] + dx[i]*b, king[1] + dy[i]*a))
        queens_position.add((queen[0] + dx[i]*a, queen[1] + dy[i]*b))
        queens_position.add((queen[0] + dx[i]*b, queen[1] + dy[i]*a))
    common_position = 0
    # print(queens_position)
    # print(kings_position)
    for i in kings_position:
        if i in queens_position:
            common_position+=1
    print(common_position)
n = int(input())
while n:
    solve()
    n-=1