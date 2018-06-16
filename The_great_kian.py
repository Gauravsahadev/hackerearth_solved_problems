#The great kian
n=int(input())
numbers=str(input())
i=0
j=1
k=2

sum1=0
while (i<n):
	sum1+=int(numbers[i])
	i+=3

sum2=0
while (j<n):
	sum2+=int(numbers[j])
	j+=3
sum3=0
while (k<n):
	sum3+=int(numbers[k])
	k+=3

print(sum1,sum2,sum3)