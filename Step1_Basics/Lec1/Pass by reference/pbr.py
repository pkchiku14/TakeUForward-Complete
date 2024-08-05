# Geek is learning about functions and calling a function with arguments. He learns that passing can take 
# one of two forms: pass by value or pass by reference.

# Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in 
# fulfilling his goal.




class Solution:
    def passedBy(self, a, b):

        return a+1, b+2


if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        a, b = list(map(int, input().split()))
        ob = Solution()
        res = ob.passedBy(a, b)
        print(res[0], res[1])