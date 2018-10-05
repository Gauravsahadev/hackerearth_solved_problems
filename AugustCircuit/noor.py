def max_val(num,d):
	pass
	for x in d:
		if num< d[x]:
			num=d[x]
			key=x
	c=0
	for k in d:
		if num>=k:
			c+=1
	if c!=0:	
		return key
	else:
		return -99
lst=[]
t=int(input())
while t!=0:
	pass
	n=int(input())
	d=dict()
	for i in range(n):
		# arr=input().split()
		s,e=input().split()
		s=int(s)
		e=int(e)
		d.update({s:e})
	for i in d.values():	
		key=max_val(i,d)
		if key!=-99:
			lst.append(key)

	print(len(d)-len(lst))	
	t-=1