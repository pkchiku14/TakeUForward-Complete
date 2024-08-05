# Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
# Given a data type, help Geek in finding the size of it in byte.

# Data Type - Character, Integer, Long, Float and Double

str = input().lower()
def DataTypeChecker(strng):
    if strng == "character":
        return 1
    elif strng == "integer" or strng == "float":
        return 4
    else:
        return 8

result = DataTypeChecker(str)
print(result)