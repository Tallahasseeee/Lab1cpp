for i in range(200,300) :
	Sum1 = 0
	for j in range(1,i):
	    if i % j == 0 :
		    Sum1 += j

	for k in range(200,300):
		Sum2 = 0
		for j in range(1,k):
			if k % j == 0:
				Sum2 += j

		if i == Sum2 and k == Sum1:
			print("Pair of friendly numbers:" + str(i) + " and " + str(k))