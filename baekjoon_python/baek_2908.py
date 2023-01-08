a,b=map(str, input().split())
x=int(a[2]+a[1]+a[0])
y=int(b[2]+b[1]+b[0])

if x>y:
    print(a[2]+a[1]+a[0])
else:
    print(b[2]+b[1]+b[0])
    