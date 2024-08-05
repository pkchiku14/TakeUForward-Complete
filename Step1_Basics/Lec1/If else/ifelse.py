# 
# Given two integers, n and m. The task is to check the relation between n and m.

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

def relation(num1, num2):
    if num1 > num2:
        return "Greater"
    elif num1 < num2:
        return "Lesser"
    else:
        return "Equal"
    
result = relation(num1, num2)
print(result)