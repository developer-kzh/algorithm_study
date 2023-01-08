a1, b1 = map(int, input().split())
a2, b2 = map(int, input().split())
a3, b3 = map(int, input().split())
if a1 == a2 and b1 == b3 :
    print(a3, b2)
elif a1 == a3 and b1 == b2 :
    print(a2, b3)
elif a2 == a3 and b1 == b2 :
    print(a3, 