t=int(input())
while t!=0:
	pass
	n=int(input())
	l=[]
	m=[]
	r=[]
	for i in range(n):
		# arr=input().split()
		s,e=input().split()
		s=int(s)
		e=int(e)
		l.append(s)
		m.append(e)
	c=1
	while c!=0:
		pass
		c=0
		mx=max(m)
		if mx>=min(l):
			c+=1
			r.append(mx)
			m.remove(mx)
	if len(r)>len(m):
		print(len(r))
	else:
		print(len(m))
	t-=1