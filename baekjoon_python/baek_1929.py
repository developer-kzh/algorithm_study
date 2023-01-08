M, N = map(int, input().split())
pri_num = []
for i in range(M, N+1):
    if i != 1:
        if i == 2:
            pri_num.append(i)
        elif i == 3:
            pri_num.append(i)
        elif i%2 != 0 and i%3 !=0:
            pri_num.append(i)
pri_num.sort()
for i in pri_num:
    print(i)