dec = 0

n = 10

for i in range(31):
	k = n << i;
	print(i, n , dec, n & 1)
	if (k & 1):
		dec = dec + 1
	dec *= 10

print(dec)
