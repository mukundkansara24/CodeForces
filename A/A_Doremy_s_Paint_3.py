def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    unique_element = []
    frequency = []
    for a in arr:
        if a not in unique_element:
            unique_element.append(a)
    if(len(unique_element) > 2):
        print("No")
        return
    else:
        for a in unique_element:
            cnt = 0
            for i in range (0,len(arr)):
                if(a==arr[i]):
                    cnt+=1
            frequency.append(cnt)
        # print(frequency)
        for a in frequency:
            if a >= ((n+1) // 2 + 1) and len(unique_element) == 2:
                print("No")
                return
        print("Yes")
n = int(input())
while n:
    solve()
    n-=1