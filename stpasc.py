import random
a = random.randrange(0,3)
b = int(input("put a random number between 0 & 2 both included: "))
print(a)
if (a==b):
    print("it's tie.")
else:
    z = a+1
    if (z==3):
        z = 0
    if (z == b):
        print("won")
    else:
        print("lose")

