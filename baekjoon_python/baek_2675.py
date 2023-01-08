T = int(input())
for i in range(T):
    R, S = map(str, input().split())
    R = int(R)
    S = list(S)
    for x in S:
        print(x * R, end = "")
    print("")
        


