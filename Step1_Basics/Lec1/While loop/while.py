# While loop is another loop like for loop but unlike for loop it only checks for one condition.
# Here, we will use a while loop and print a number n's table in reverse order.

num = int(input("Enter the input: "))

def reverse(v):
    t = 10
    while t > 0:
        print(t*num, end=" ")
        t -= 1

reverse(num)