while True:
    a,b,c = map(int, input().split())   
    if a > b>= c or a > c>= b:
        if a**2 == b**2 + c**2 :
            print("right")
        else:
            print("wrong")
    elif b > c >= a or b > a >= c:
        if b**2 == c**2 + a**2:
            print("right")
        else:
            print("wrong")
    elif c > a >= b or c > b >= a:
        if c**2 == a**2 + b**2:
            print("right")
        else:
            print("wrong")
    elif a ==0 and b==0 and c==0:
        break

