testCase=int(input())
a=[10][10]

for t in range(0,testCase):
	for i in range(0,3):
		for j in range(0,3):
			a[i][j]=input()

	for i in range(0,3):
		for j in range(0,3):
			print( 	a[i][j]+"")
		print("\n")
