#some library function
import math
square_root = math.sqrt(4)
power = pow(3,2)
print("the square root of 4 is:", square_root)
print("three to the power two is : ",power)

#function call with default arguments
def add(a = 34, b = 44):
    print(a+b)
#system call with arguments:
add(8,90)#98(8+90)
#function call with one arguments:
add(a =9)#53(9+44)
#function call with no arguments:
add()#78(34+44)

#arbitrary function, used when don't know how many no. of arguments are required.
#here we use *
def summ(*numbers):
    res =0
    for i in numbers:
        res = res+i
    print("the sum of numbers are ",res)
#passing three numbers to find their sum
summ(8,98,88)
summ(0,9,9,8)
#after getting multiple values it behaves like an array

