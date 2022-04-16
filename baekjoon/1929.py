n, m = input().split(' ')

for i in range(int(n), int(m) + 1):
	cnt = 0
	for j in range(2, i):
		if i % j == 0: cnt += 1
	
	if cnt == 0: print(i)
