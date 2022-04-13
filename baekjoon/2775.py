n = int(input())
amt = 0
for i in range(n):
	k = int(input())
	m = int(input())

	for j in range(1, m + 1):
		if k == 1:
			amt += j
		else:
			amt *= 2 + 1
	print(amt)

