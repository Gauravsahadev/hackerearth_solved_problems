from math import floor
t=int(input())
while t!=0:
	a=[]
	b=[]
	i=0
	c=0
	n=int(input())
	lst=input().split()
	[a.append(x) for x in lst]
	lst2=input().split()
	[b.append(x) for x in lst2]
	m=floor(n/2)
	while int(a[m])!=int(b[m]) or c<n:
		pass
		temp1=a[0]
		temp2=b[n-1]
		for j in range(0,n-1):
			a[j]=a[j+1]
			b[n-j-1]=b[n-j-2]
		a[n-i-1]=temp2
		b[i]=temp1
		i+=1
		c+=1
	if int(a[m])==int(b[m]):
		print(c)
	t-=1