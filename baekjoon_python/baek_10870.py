n = int(input())
f0 = 0
f1 = 1
def F(n):
    if n >= 2 :
        return F(n-2) + F(n-1)
    elif n == 1:
        return f1
    else:
        return f0

print(F(n))

n= int (input())
def F(n):
    def loop(n,total):
        if n >= 2:
            return loop(n-1, total +  
    return loop(n, 0)