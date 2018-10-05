n=int(input())
a=[]
a=input().split()
m=int(input())
b=[]
b=input().split()
setb=[]
new_x=[]
for x in a:
    for y in b:
        new_x.append(int(y)-int(x))
print(new_x)
for i in range(len(new_x)):    
    for j in a:
        print(int(j)+int((new_x[i])))
        for k in b:
            if (int(j)+int(new_x[i])==int(k)) and (int(j)+int(new_x[i])) not in setb:
                setb.append(new_x[i])
print(setb)

# setb=remove_duplicates(setb)
# setb.sort()
# print(" ".join(map(str,setb)))
