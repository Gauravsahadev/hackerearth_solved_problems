import math

testCase = int(input())
while testCase != 0:
    pass
    n, a, b = input().split()
    sum_list = []

    n = int(n)
    a = int(a)
    b = int(b)
  
    approx_range = ((b*n)/(a+b))
    
    s1 = math.ceil(approx_range)
    s2 = math.floor(approx_range)
    s1 = a*pow(s1, 2)+b*pow((n-s1), 2)
    s2 = a*pow(s2, 2)+b*pow((n-s2), 2)
    if s1 < s2:
        smallest = s1
    else:
        smallest =s2
  

    print(smallest)
 
    testCase -= 1
