def max_char_count(string):
    max_char = ''
    max_count = 0
    for char in set(string):
        count = string.count(char)
        if count > max_count:
            max_count = count
            max_char = char
    return max_char,max_count

n=int(input())
s=input()
r,c=max_char_count(s)
s=list(s)
for i in range(c):
	s.remove(r)
print(len(s))