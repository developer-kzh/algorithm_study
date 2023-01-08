n = int(input())
i=1
while i <n+1:
    a,b=map(int, input().split())
    print("Case #%d:"%i,"%d + %d ="%(a,b),a+b)
    i+=1
     