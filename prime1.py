n=int(input())
for j in range(1,n):
	i=2
	while(i<j):
		if(j%i==0):
			break
		else:
			i-=1
	if(i==j):
		print(j)
