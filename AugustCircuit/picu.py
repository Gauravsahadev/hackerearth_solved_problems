from math import ceil
testCase=int(input())
while testCase!=0:
	d,a,m,b,x=input().split()
	d=int(d)
	a=int(a)
	m=int(m)
	b=int(b)
	x=int(x)
	s=((x-d)%(a*m+b))
	p=((x-d)//(a*m+b))*(m+1)
	# print(s,p)
	if s==0:
		print(p)
	elif s<a:
		p+=1
		print(p)
	else:
		rem=ceil(s/a)
		p+=rem
		print(p)

	testCase-=1