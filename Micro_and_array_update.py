t = int(input())

while t != 0:
    pass
    lst = []
    # time=0
    n, k = input().split()
    n = int(n)
    k = int(k)
    arr = input().split()
    [lst.append(int(arr[i])) for i in range(len(arr))]
    minimum = min(lst)
    print(minimum)
    t -= 1
