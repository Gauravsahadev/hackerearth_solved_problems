#Input the number
number=int(input())

#If divisible by both 3 and 5 then print AngelHack!
if number%3==0 and number%5==0:
	print("AngelHack!")

#Else if divisible by 3 then print Angel
elif number%3==0:
	print("Angel")

#Else if divisible by 5 then print Hack
elif number%5==0:
	print("Hack")

#Else print the number
else:
	print(number)