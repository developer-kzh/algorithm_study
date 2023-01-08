a=int(input())
b=int(input())
c=int(input())
d=int(input())
if a<c :
    z= ((a+2)*(b+1))-(a*b) + ((c+2)*(d+1))-(c*d)+(c-a)
    print(z)
elif a>c:
    z= ((a+2)*(b+1))-(a*b) + ((c+2)*(d+1))-(c*d)+(a-c)
    print(z)
else:
    z=(a+2)*(b+d+2)-(a)*(b+d)
    print(z)