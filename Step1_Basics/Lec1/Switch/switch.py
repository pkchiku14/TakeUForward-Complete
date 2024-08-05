
# Given an integer choice denoting the choice of the user and a list containing the single 
# value R or two values L and B depending on the choice. If the user's choice is 1, calculate the area 
# of the circle having the given radius(R). Else if the choice is 2, calculate the area of the rectangle 
# with the given length(L) and breadth(B).

# Note : A list arr[], containing the single value R or the two values L and B, as input parameters. 
# Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

import math
choice = int(input("enter your choice: "))

def Switch(choice):
    if choice == 1:
        r = int(input("Enter radius: "))
        result =  math.pi*(r**2)
        return round(result,2)
    elif choice == 2:
        l = int(input("Enter length: "))
        b = int(input("Enter breadth: "))
        result = l*b
        return result
    else:
        return "Invalid choice"

result = Switch(choice)
print(result)