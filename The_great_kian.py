series = int(input())
#list with the values
a = [int(x) for x in input().split()]
for i in range (3):
    j = i
    ans = 0
    while j < series:
        ans += a[j]
        j+=3
    print(ans, end = ' ')
