for _ in range(int(input())):
	s = input()
	for (d, k) in zip("RGB", "rgb"):
		if s.find(d) < s.find(k):
			print("NO")
			break
	else:
		print("YES")
