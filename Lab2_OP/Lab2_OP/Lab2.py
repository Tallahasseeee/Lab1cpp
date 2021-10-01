x = int(input("Enter the X: "))
if x <= -1 :
    y = 1/(x*x)
elif x <= 2:
    y = x*x
else:
    y = 4

print("y = " + str(y))
