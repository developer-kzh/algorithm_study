a, b = map(int, input().split())
if a == 0 and b<45 :
    print(23, 60+b-45)
elif b>=45:
    print(a, b-45 )
else:
    print(a-1, 60+b-45 )
