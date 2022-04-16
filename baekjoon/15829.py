n = int(input())
str = input()
sum = 0
for i in range(len(str)):
	num = ord(str[i]) - ord('a') + 1
	sum += num * pow(31, i)
print(sum % 1234567891)
