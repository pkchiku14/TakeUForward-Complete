# Problem statement
# The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following 
# formula -

#     F(n) = F(n - 1) + F(n - 2), 
#     Where, F(1) = 1, F(2) = 1


# Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 
# 'n' = 2 by using conditionals like if else and return what's expected.

# "Indexing is start from 1"

from math import *
from collections import *
from sys import *
from os import *

## Read input as specified in the question.
## Print output as specified in the question.
num = int(input("Input the index: "))
def fibonacci(number):
    if number == 1 or number == 2:
        return 1
    else:
        return fibonacci(number - 1) + fibonacci(number - 2)

result = fibonacci(num)
print(result)