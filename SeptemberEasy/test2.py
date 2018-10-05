n, x, y = input().split()
n = int(n)
X = int(x)
Y = int(y)
lst = []
y_count = 0
x_count = 0
a = input().split()
[lst.append(x) for x in a]
temp = 999999
if X < Y:
    for x in lst:
        cn = lst.count(x)
        while cn != 1:
            lst.remove(x)
            x_count += X
            cn -= 1
        temp = x_count
else:
    x_count = 0
    for x in lst:
        cn = lst.count(x)
     #   print(cn)
        if cn > 1:
            if cn == 2:
                num = lst.index(x)
                lst[num] = int(lst[num])-1
                lst[num] = str(lst[num])
                y_count = y_count+Y
            else:
                while cn != 2:
                    lst.remove(x)
                    x_count += X
                    cn -= 1

                num = lst.index(x)
                dd = 1
                while dd != 0:
                    cc = lst.count(str(int(lst[num])-1))
                    if c == 0:
                        lst[num] = int(lst[num])-1
                        lst[num] = str(lst[num])
                        y_count = y_count+Y
                        dd = 0
                    else:
                        lst[num] = int(lst[num])-1
                        lst[num] = str(lst[num])
                        y_count = y_count+Y
print(lst)
if temp < (x_count+y_count):
    print(temp)
else:
    print(x_count+y_count)
