def remove_duplicates(lst):
    lst.sort()
    lst1=[]
    i = len(lst) - 1
    while i > 0:  
        if lst[i] == lst[i - 1] and lst[i] not in lst1:
            lst1.append(lst[i])
        i -= 1
    return lst1



n=int(input())
a=[]
a=input().split()
m=int(input())
b=[]
b=input().split()
setb=[]
e=int(max(b))-n

for i in range(1,e+1):
	for j in a:
		for k in b:
			if(i+int(j)==int(k)):
				setb.append(i)
print(setb)
setb=remove_duplicates(setb)
setb.sort()
print(" ".join(map(str,setb)))
